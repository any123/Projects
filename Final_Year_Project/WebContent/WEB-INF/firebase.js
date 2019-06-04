
 alert("Hi i am here !!!");


window.alert("Check Check Check 123");

function runPlease(){
	
	var firebaseref = firebase.database().ref();
	
	
	firebaseref.child("Text").set("Some Random Value !!!");
	 
}


