package ankit;

import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Scanner;

import org.omg.CORBA.portable.OutputStream;
import org.springframework.stereotype.Controller;

import org.springframework.web.bind.annotation.RequestMapping;

import org.springframework.web.servlet.ModelAndView;



@Controller
public class Home {

	
	@RequestMapping(value="/home.html")
	public ModelAndView getAdmissionForm() {

		ModelAndView model = new ModelAndView("Home");
		
		return model;
	}
	
	
	
	@RequestMapping(value="/Terms_and_Services.html")
	public ModelAndView sendMessage() { 

		ModelAndView model = new ModelAndView("Terms_and_Services");
		
		
		return model;
	}
	
	
	
	
	
}