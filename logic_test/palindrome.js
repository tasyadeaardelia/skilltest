function Palindrome(string){
	if((string.length == 1) || (string.length == 0)){
  	document.writeln("Palindrome");
  }
  else {
  	if(string.substr(0, 1) == string.substr(-1)){
    	return Palindrome(string.substr(1, string.length-2))
    }
    else {
    	document.writeln("Not a palindrome");
    }
  }
}

let string = "radar";
Palindrome(string.toLowerCase());