function LeapYear(start_year, end_year) {
    for(let i = start_year; i <= end_year; i++) {
    	if(i % 100 === 0){
      document.writeln(i);
      }
      if(i % 4 === 0) {
      document.writeln(i);
      }
    }
}

LeapYear(1990, 2020);