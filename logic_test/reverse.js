function Reverse(string){
    reverse = "";
    tmp = "";
    for(let i = 0; i < string.length; i++) {
        if(string [i] == " "){
            reverse = `${reverse} ${tmp} &nbsp`;
            tmp = "";
            continue;
        }
        tmp = `${string[i]} ${tmp}`;

    }
    reverse = `${reverse} ${tmp}`;

    document.writeln(reverse);
}