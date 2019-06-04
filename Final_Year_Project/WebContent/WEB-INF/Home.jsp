

<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css" integrity="sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp" crossorigin="anonymous">
<script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.0/jquery.min.js"></script>
<script type="text/javascript" src="http://ajax.aspnetcdn.com/ajax/jquery.validate/1.11.1/jquery.validate.min.js"></script>
<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.1/jquery.min.js"></script>






<%@ page import="java.util.*" %>
<%@ page import ="java.io.BufferedReader" %>
<%@ page import ="java.io.InputStreamReader" %>
<%@ page import ="java.net.HttpURLConnection" %>
<%@ page import ="java.net.MalformedURLException" %>
<%@ page import ="java.net.URL" %>

<%@ page import ="java.io.IOException"%>
<%@ page import ="org.json.JSONException" %>
<%@ page import= "org.json.JSONObject" %>

<%@ page import ="ankit.*"%>

<html>

<head>

<style>
	<%@ include file="style.css"%>
	<%@ include file="firebase.js"%>
</style>


<link href="https://fonts.googleapis.com/css?family=Quicksand:500" rel="stylesheet">

<script  src = "https://code.jquery.com/jquery-3.2.1.js" ></script>



<script  type="text/javascript">   
 
 	function run(){
	$('nav').addClass('black');
 	}
 	
 	window.onload = run;
 </script>
 
 
 <script  type="text/javascript">   
 	
 	$("div.about").click(function(){
 		$('nav').removeClass('black');
 	});
 </script>
 
 
</head>
<body>

		<div class="wrapper" id="top">

	<nav>
		<div class="logo"><img src="${pageContext.request.contextPath}/Images/app_icon.png"  height="65" width="65" /></div>
		<ul>
			<li><h4><a href="#top">Home</a></h4></li>
			<li><h4><a href="#about">About</a></h4></li>
			<li><h4><a href="#blog">Trains</a></h4></li>
			<li><h4><a href="#contact">Contact</a></h4></li> 
			<!-- <li><h4><a  class="active"  href="<%=request.getContextPath()%>/sendMessage.html">Send Message</a></h4></li> -->			
			<li><h4><a  class="active"  target="_blank" href="https://onesignal.com">Send Message</a></h4></li>
			</ul>
	</nav>
	
	

	
	<section class="sec1">
	
	<!--  	<img src="${pageContext.request.contextPath}/Images/Train.jpg" /> -->
	
	
	</section>
	
	<section class="content">
		
		
		<div id="home" class="container">
		</div>
	
		<div id="about"  class="container">
			
			<div class="row">
			
				
						<h2>Public Address System</h2>
				<p>It is observed that the announcements from public address systems at railway stations are at times not audible. 
                It may be due to train noise, crowding at the station, technical defects in the public address system etc. 
                So with the help of our Android and web-app, the passengers can listen to such announcements clearly on their personal mobiles.
				</p>
						
			</div>
	
		</div>
	
	
	
	<div id="blog" class="container">
		
		<div class="row"><br><br><br><br><br><br><br><br></div>
		<div class="row">
			
			
  			
			<p id="myInput" >
				<%
						Rail rail_obj = new Rail();
						
						Help help_obj = new Help();
						
						rail_obj = Help.get_trains();
						
						 ArrayList<String> train_names = new ArrayList<String>();
						 ArrayList<String> train_times = new ArrayList<String>();
						 ArrayList<String> late_bys = new ArrayList<String>();
						 int total_trains;
						 
						 
						 
						train_names = rail_obj.train_name;
						train_times = rail_obj.train_time;
						total_trains = rail_obj.total_trains;
						late_bys = rail_obj.late_by;
						
						out.println("Total trains departing from Jalandhar City  are: "+ total_trains);
						out.println("<br>");
						
						
						
						for(int i=0;i<train_names.size();i++)
						{
							out.print(train_names.get(i));  
							out.print("&emsp;&emsp;");
							out.print(train_times.get(i));
							out.print("&emsp;&emsp;");
					
							if(late_bys.get(i).toString().equalsIgnoreCase("RIGHT TIME"))
							out.print( late_bys.get(i));
							else 
								if(late_bys.get(i).toString()!= null)
								out.print(late_bys.get(i));	
							
							
							out.println("<br>");
						}
						
						out.println("<br>");
						out.println("<br>");
						
				%>
				
				
  				
  					
			</p>
			<p>
			<button  class="btn btn-primary btn-sm" onclick="copyToClipboard('#myInput')">Copy Text</button>
			</p>
			<script src="https://ajax.googleapis.com/ajax/libs/jquery/1.11.1/jquery.min.js"></script>
			
			<script>
			function copyToClipboard(element) {
  			var $temp = $("<input>");
			  $("body").append($temp);
			  $temp.val($(element).text()).select();
			  document.execCommand("copy");
			  $temp.remove();
}
			</script>
			
			
	
				
		</div>
		
		</div>
			<div id="nothing" class="container">
			<div class="row">
			<br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br>
			</div>
			</div>
			
			
	<div id="contact" class="container">
			  
		   		 <div class="panel panel-default">
		     		 <div class="panel-heading">Reach Us</div>
		      			<div class="panel-body">
		      			
		      				 
					       	<div style="font-size: 20px;" class="copy-right">© 2018 Indian RailWay Inc. All Rights Reserved. 
							      
							      
							       &emsp; <a style="font-size: 20px; color: #2E86C1"   target="_blank"  href="<%=request.getContextPath()%>/Terms_and_Services.html">Terms of use</a> 
							      	      
							       
							   
							       
							      
									&emsp;	<a style="font-size: 20px; color: #2E86C1"  target="_blank" href="https://www.facebook.com/RailMinIndia/">FaceBook</a>
								   
									&emsp;	<a style="font-size: 20px; color: #2E86C1"  target="_blank" href="https://twitter.com/RailMinIndia">Twitter</a>
								
									&emsp;	<a style="font-size: 20px; color: #2E86C1"  target="_blank" href="http://www.indianrail.gov.in/">Indian Railway</a>	
							      							       	
							</div>
							
							
       										
		      			</div>
    </div>
   

</div>
			
	</section> 
	
	

</div>


<script>
		function myFunction() {
		  var copyText = document.getElementById("myInput");
		  copyText.select();
		  document.execCommand("Copy");
		  
		  var tooltip = document.getElementById("myTooltip");
		  tooltip.innerHTML = "Copied: " + copyText.value;
		}
		
		function outFunc() {
		  var tooltip = document.getElementById("myTooltip");
		  tooltip.innerHTML = "Copy to clipboard";
		}
</script>


		
	

	<script type="text/javascript">
	// Select all links with hashes
	$('a[href*="#"]')
	  // Remove links that don't actually link to anything
	  .not('[href="#"]')
	  .not('[href="#0"]')
	  .click(function(event) {
	    // On-page links
	    if (
	      location.pathname.replace(/^\//, '') == this.pathname.replace(/^\//, '') 
	      && 
	      location.hostname == this.hostname
	    ) {
	      // Figure out element to scroll to
	      var target = $(this.hash);
	      target = target.length ? target : $('[name=' + this.hash.slice(1) + ']');
	      // Does a scroll target exist?
	      if (target.length) {
	        // Only prevent default if animation is actually gonna happen
	        event.preventDefault();
	        $('html, body').animate({
	          scrollTop: target.offset().top
	        }, 1000, function() {
	          // Callback after animation
	          // Must change focus!
	          var $target = $(target);
	          $target.focus();
	          if ($target.is(":focus")) { // Checking if the target was focused
	            return false;
	          } else {
	            $target.attr('tabindex','-1'); // Adding tabindex for elements not focusable
	            $target.focus(); // Set focus again
	          };
	        });
	      }
	    }
	  });
	

	</script>

















</body>


</html>

