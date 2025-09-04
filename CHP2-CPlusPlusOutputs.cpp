#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World\n\n "; // This is known as a single output statement

    //If multiple pieces of data need to be placed in the output stream in a single statement, multiple stream insertion operators may be used
    cout << "Hello" << " " << "World\n\n"; //Here, the string "Hello" is followed by a space (" ") and then "World"

// Method 2 Printing 
    //This approach is particularly useful when outputting different data types.
    cout << "Hello";
    cout << " ";
    cout << "World\n\n\t\t"; //exput Hello Worldexample ~ % 


    //This occurs because no line break follows the output. To insert a line break, manipulators like endl can be used with the stream insertion operator:
    cout << "Hello World" << endl;   //O utput  Hello World
                                        //      example ~ %     

    //Program Example – ASCII Art

//Output an ASCII art representation of Pikachu to the screen.
cout << "`;-.          ___," << endl
         << "  `.`\\_...._/`.-\\\"" << endl
         << "    \\        /      ," << endl
         << "    /()   () \\    .' `-._" << endl
         << "   |)  .    ()\\  /   _.'" << endl
         << "   \\  -'-     ,; '. <" << endl
         << "    ;.__     ,;|   > \\ " << endl
         << "   / ,    / ,  |.-'.-'" << endl
         << "  (_/    (_/ ,;|.<`" << endl
         << "    \\    ,     ;-`" << endl
         << "     >   \\    /" << endl
         << "    (_,-'`> .'" << endl
         << "         (_,'" << endl;
// example 2 :
cout<<"\n\n  \t\t\t Example 2 ";

cout << "        /\n";
    cout << "                        _,.------....___,.' ',.-.\n";
    cout << "                     ,-'          _,.--\"        |\n";
    cout << "                   ,'         _.-'              .\n";
    cout << "                  /   ,     ,'                   `\n";
    cout << "                 .   /     /                     ``.\n";
    cout << "                 |  |     .                       \\.\\\n";
    cout << "       ____      |___._.  |       __               \\ `.\n";
    cout << "     .'    `---\"\"       ``\"-.--\"'`  \\               .  \\\n";
    cout << "    .  ,            __               `              |   .\n";
    cout << "    `,'         ,-\"'  .               \\             |    L\n";
    cout << "   ,'          '    _.'                -._          /    |\n";
    cout << "  ,`-.    ,\".   `--'                      >.      ,'     |\n";
    cout << " . .'\\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n";
    cout << " ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n";
    cout << " j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n";
    cout << "/ L:_  |                 .  \"' :_;                `.'.'\n";
    cout << ".    \"\"'                  \"\"\"\"\"'                    V\n";
    cout << " `.                                 .    `.   _,..  `\n";
    cout << "   `,_   .    .                _,-'/    .. `,'   __  `\n";
    cout << "    ) \\`._        ___....----\"'  ,'   .'  \\ |   '  \\  .\n";
    cout << "   /   `. \"`-.--\"'         _,' ,'     `---' |    `./  |\n";
    cout << "  .   _  `\"\"'--.._____..--\"   ,             '         |\n";
    cout << "  | .\" `. `-.                /-.           /          ,\n";
    cout << "  | `._.'    `,_            ;  /         ,'          .\n";
    cout << " .'          /| `-.        . ,'         ,           ,\n";
    cout << " '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n";
    cout << " `\"^--'..'   '-`-^-'\"--    `-^-'`.''\"\"\"\"\"`.,^.`.--' mh\n";


    cout << " \n\n\n\t\t\texample 3 : " ; 
    cout << "     .\"-,.__\n";
    cout << "                 `.     `.  ,\n";
    cout << "              .--'  .._,'\"-' `.\n";
    cout << "             .    .'         `'\n";
    cout << "             `.   /          ,'\n";
    cout << "               `  '--.   ,-\"'\n";
    cout << "                `\"`   |  \\\n";
    cout << "                   -. \\, |\n";
    cout << "                    `--Y.'      ___.\n";
    cout << "                         \\     L._, \\\n";
    cout << "               _.,        `.   <  <\\                _\n";
    cout << "             ,' '           `, `.   | \\            ( `\n";
    cout << "          ../, `.            `  |    .\\`.           \\ \\_\n";
    cout << "         ,' ,..  .           _.,'    ||\\l            )  '\".\n";
    cout << "        , ,'   \\           ,'.-.`-._,'  |           .  _._`.\n";
    cout << "      ,' /      \\ \\        `' ' `--/   | \\          / /   ..\\\n";
    cout << "    .'  /        \\ .         |\\__ - _ ,'` `        / /     `.`.\n";
    cout << "    |  '          ..         `-...-\"  |  `-'      / /        . `.\n";
    cout << "    | /           |L__           |    |          / /          `. `.\n";
    cout << "   , /            .   .          |    |         / /             ` `\n";
    cout << "  / /          ,. ,`._ `-_       |    |  _   ,-' /               ` \\\n";
    cout << " / .           \\\"`_/. `-_ \\_,.  ,'    +-' `-'  _,        ..,-.    `.\\\n";
    cout << ".  '         .-f    ,'   `    '.       \\__.---'     _   .'   '     \\ \\\n";
    cout << "' /          `.'    l     .' /          \\..      ,_|/   `.  ,'`     L`\n";
    cout << "|'      _.-\"\"` `.    \\ _,'  `            \\ `.___`.'\"`-.  , |   |    | \\\n";
    cout << "||    ,'      `. `.   '       _,...._        `  |    `/ '  |   '     .|\n";
    cout << "||  ,'          `. ;.,.---' ,'       `.   `.. `-'  .-' /_ .'    ;_   ||\n";
    cout << "|| '              V      / /           `   | `   ,'   ,' '.    !  `. ||\n";
    cout << "||/            _,-------7 '              . |  `-'    l         /    `||\n";
    cout << ". |          ,' .-   ,' ||               | .-.        `.      .'     ||\n";
    cout << " `'        ,'    `\".'    |               |    `.        '. -.'       `'\n";
    cout << "          /      ,'      |               |,'    \\-.._,.'/'\n";
    cout << "          .     /        .               .       \\    .''\n";
    cout << "        .`.    |         `.             /         :_,'.'\n";
    cout << "          \\ `...\\   _     ,'-.        .'         /_.-'\n";
    cout << "           `-.__ `,  `'   .  _.>----''.  _  __  /\n";
    cout << "                .'        /\"'          |  \"'   '_\n";
    cout << "               /_|.-'\\ ,\".             '.'`__'-( \\\n";
    cout << "                 / ,\"'\"\\,'               `/  `-.|\" mh\n";



    cout << " \n\n ";
    cout << " DEF: \t\t";
    cout << "Integral data types store whole numbers in memory without any fractional or decimal components.";

    cout << "\n\n";
  cout << "Terms\n"
         << "Data Type: A classification specifying the type of data that a variable can store, determining its size, range, and operations that can be performed on it.\n\n"

         << "Integral Data: Any data type that stores whole numbers (without decimals).\n\n"

         << "Integer (int): A data type that represents whole numbers using 4 bytes (32 bits), with a range of -2,147,483,648 to 2,147,483,647.\n"
         << "Short (short): A smaller integer type that uses 2 bytes (16 bits), with a range of -32,768 to 32,767.\n"
         << "Long Long (long long): A larger integer type that uses 8 bytes (64 bits), with a range of -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.\n\n"

         << "Boolean (bool): A data type that represents two logical states: true (1) and false (0).\n"
         << "Character (char): A data type used to store a single character, represented in 1 byte (8 bits).\n"
         << "ASCII (American Standard Code for Information Interchange): A character encoding standard where each character is mapped to a numerical value (0-255).\n\n"

         << "Floating-Point Data: Any data type that stores decimal numbers.\n"
         << "Float (float): A single-precision floating-point number that uses 4 bytes (32 bits), storing values with up to 6 significant digits.\n"
         << "Double (double): A double-precision floating-point number that uses 8 bytes (64 bits), storing values with up to 15 significant digits.\n\n"

         << "String: A sequence of characters enclosed in double quotes (\" \"), varying in size based on the number of characters stored.\n"
         << "Escape Sequence: A combination of characters starting with a backslash (\\) used to represent special characters in a string.\n";
         return 0;
}