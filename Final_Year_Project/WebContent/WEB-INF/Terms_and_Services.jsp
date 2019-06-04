

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

			<li><h4><a  class="active"  href="<%=request.getContextPath()%>/home.html">Go Back Home</a></h4></li>			
	
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
			
				
						<h2>Terms and Services</h2>
				<p>This website is operated by Indian Railway. Throughout the site, the terms "we", "us" and "our" refer to Indian Railway. Indian Railway offers this website, including all information, tools and services available from this site to you, the user, conditioned upon your acceptance of all terms, conditions, policies and notices stated here.

				By visiting our site and/ or purchasing something from us, you engage in our "Service" and agree to be bound by the following terms and conditions ("Terms of Service", "Terms"), including those additional terms and conditions and policies referenced herein and/or available by hyperlink. These Terms of Service apply to all users of the site, 
				including without limitation users who are browsers, vendors, customers, merchants, and/ or contributors of content.</p>
						
			</div>
	
		</div>
	
	
	
	<div id="blog" class="container">
		
		<div class="row"><br><br><br><br><br><br><br><br></div>
	
		
		</div>
			<div id="nothing" class="container">
			<div class="row">
			<br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br> <br>
			</div>
			</div>
			
			
	
			
	</section> 
	
	

</div>



	

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

