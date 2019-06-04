package ankit;

import java.net.HttpURLConnection;
import java.net.URL;

import org.omg.CORBA.portable.OutputStream;
import org.springframework.stereotype.Controller;


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.MalformedURLException;

import java.util.ArrayList;
import java.util.Scanner;

import javax.servlet.http.HttpServlet;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;


import ankit.Rail;

@Controller
public class Help extends HttpServlet {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public static  void main() throws IOException, JSONException {
		
		
		get_trains();
		
		//send_message();
		
		
	}

	
	
	
	



	public static Rail get_trains() throws IOException, JSONException {
		
		Rail rail_obj = new Rail();
		
		 ArrayList<String> train_names = new ArrayList<String>();
		 ArrayList<String> train_times = new ArrayList<String>();
		 
		 ArrayList<String> late_by = new ArrayList<String>();
		 
		 try {
				
				String url ="https://api.railwayapi.com/v2/arrivals/station/JUC/hours/2/apikey/t64dk6ppzf";
				
				URL obj = new URL(url);
				
				HttpURLConnection con = (HttpURLConnection) obj.openConnection();
				
				BufferedReader in = new BufferedReader(new InputStreamReader(con.getInputStream()));
				
				String inputLine;
				
				StringBuffer responses = new StringBuffer();

				
				while((inputLine = in.readLine()) !=null) {
					responses.append(inputLine);
			}

					JSONObject obj1 = new JSONObject(responses.toString());
					
					System.out.println(obj1.toString());  
					
					System.out.println("\n\n");
					
					JSONArray array =obj1.getJSONArray("trains");
					
					System.out.println("Total number of trains are: "+array.length());
					
					int total_trains = array.length();
					
					 rail_obj.total_trains = total_trains;
					
					train_names.add("");
					train_times.add("");
					late_by.add("");
					
					for(int i=0;i<total_trains;i++)
					{
						
						JSONObject obj2 = array.getJSONObject(i);
					
						
						train_names.add(obj2.getString("name"));
						
						String temp = obj2.getString("actdep");
						
						if(temp == "Source")
						train_times.add("Not started Yet");
						else
						train_times.add(temp);
						
						late_by.add(obj2.getString("delaydep"));
					}
					
					
					
		}
			
			 catch (MalformedURLException e) {
					// TODO Auto-generated catch block
					e.printStackTrace();
			 }
		
		
			 rail_obj.train_name = train_names;
			 rail_obj.train_time = train_times;
			 rail_obj.late_by = late_by;
			
			 
			return rail_obj;

	}
	
	
	public static Rail send_message() {
		Rail rail_obj = new Rail();
		
		try {
			   String jsonResponse;
			   
			   URL url = new URL("https://onesignal.com/api/v1/notifications");
			   HttpURLConnection con = (HttpURLConnection)url.openConnection();
			   con.setUseCaches(false);
			   con.setDoOutput(true);
			   con.setDoInput(true);

			   con.setRequestProperty("Content-Type", "application/json; charset=UTF-8");
			   con.setRequestProperty("Authorization", "Basic NGEwMGZmMjItY2NkNy0xMWUzLTk5ZDUtMDAwYzI5NDBlNjJj");
			   con.setRequestMethod("POST");

			   
			   
			   String strJsonBody = "{"
			                      +   "\"app_id\": \"5b8d16ac-d964-49cd-97be-cd61af44aa7d\","
			                      +   "\"included_segments\": [\"All\"],"
			                      +   "\"data\": {\"foo\": \"bar\"},"
			                      +   "\"contents\": {\"en\": \"LONGEST POSSIBLE AS LIS OR LCD OR KNAPSACK"
			                      + "  OR GEEKSFORGEEKS OR BOOKS OR YOUTUBE ARRAY TUTORIAL OR ANYTHING YOU LIKE English Message\"}"
			                      + "}";
			        
			   
			   
			   
			   System.out.println("strJsonBody:\n" + strJsonBody);

			   byte[] sendBytes = strJsonBody.getBytes("UTF-8");
			   con.setFixedLengthStreamingMode(sendBytes.length);

			   OutputStream outputStream = (OutputStream) con.getOutputStream();
			   outputStream.write(sendBytes);

			   int httpResponse = con.getResponseCode();
			   System.out.println("httpResponse: " + httpResponse);

			   if (  httpResponse >= HttpURLConnection.HTTP_OK
					      && httpResponse < HttpURLConnection.HTTP_BAD_REQUEST) {
					      Scanner scanner = new Scanner(con.getInputStream(), "UTF-8");
					      jsonResponse = scanner.useDelimiter("\\A").hasNext() ? scanner.next() : "";
					      scanner.close();
					   }
					   else {
					      Scanner scanner = new Scanner(con.getErrorStream(), "UTF-8");
					      jsonResponse = scanner.useDelimiter("\\A").hasNext() ? scanner.next() : "";
					      scanner.close();
					   }
					   System.out.println("jsonResponse:\n" + jsonResponse);
					 
					   
					   
					   rail_obj.msg = jsonResponse;
					   
					  
							   
					   
					} catch(Throwable t) {
					   t.printStackTrace();
					}
		
		
		return rail_obj;
	
		
		
		
	}
	
}
