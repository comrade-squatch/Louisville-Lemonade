#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {

	//Below is the artwork and prompt for a sunny day w/ high demand
	
	string sun1 = R"(               .     :     .      )";
	string sun2 = R"(            .  :    |    :  .     )";
	string sun3 = R"(             .  |   |   |  ,      )";
	string sun4 = R"(              \  |     |  /       )";
	string sun5 = R"(          .     ,-'"""`-.     .   )";
	string sun6 = R"(            "- /         \ -"     )";
	string sun7 = R"(              |           |       )";
	string sun8 = R"(        - --- |           | --- - )";
	string sun9 = R"(              |           |       )";
	string sun10 = R"(            _- \         / -_     )";
	string sun11 = R"(          .     `-.___,-'     .   )";
	string sun12 = R"(              /  |     |  \       )";
	string sun13 = R"(            .'  |   |   |  `.     )";
	string sun14 = R"(               :    |    :        )";
	string sun15 = R"(              .     :     .       )";

	cout << sun1 << "\n" << sun2 << "\n" << sun3 << "\n" << sun4 << "\n" << sun5 << "\n"
		<< sun6 << "\n" << sun7 << "\n" << sun8 << "\n" << sun9 << "\n" << sun10 << "\n"
		<< sun11 << "\n" << sun12 << "\n" << sun13 << "\n" << sun14 << "\n" << sun15 << "\n";
	cout << "Wow! What a hot, sunny day! You should be able to sell a lot of lemonade. \n";
	cout << "Press any key to continue...";
	cin.ignore();


	//Below is the artwork and prompt for a rainy day w/ low demand

	string heavy_rain1 = R"(   .' '. ' '.						)";
	string heavy_rain2 = R"(  (       (  )						)";
	string heavy_rain3 = R"(.(    )     .   .					)";
	string heavy_rain4 = R"(  (        )   )					)";
	string heavy_rain5 = R"( (        ) .    .  ' ' .			)";
	string heavy_rain6 = R"((   (      )     ) ) (   )			)";
	string heavy_rain7 = R"( (      (    )  )  (   )  )			)";
	string heavy_rain8 = R"(  ( .    .     )  (.   . )			)";
	string heavy_rain9 = R"(	' '   ' '   '   '  '			)";
	string heavy_rain10 = R"(     \  \  \   \  \   \			)";
	string heavy_rain11 = R"(    \  \  \   \  \   \				)";
	string heavy_rain12 = R"(      \  \  \   \   \				)";
	string heavy_rain13 = R"(     \  \  \   \   \  \			)";	
	string heavy_rain14 = R"(       \  \   \   \  \				)";
	string heavy_rain15 = R"(      \  \  \   \  \				)";
	string heavy_rain16 = R"(        \  \  \   \				)";
//	string heavy_rain17 = R"()";
//	string heavy_rain18 = R"()";

	cout << heavy_rain1 << "\n" << heavy_rain2 << "\n" << heavy_rain3 << "\n" << heavy_rain4 << "\n" << heavy_rain5 << "\n"
		<< heavy_rain6 << "\n" << heavy_rain7 << "\n" << heavy_rain8 << "\n" << heavy_rain9 << "\n" << heavy_rain10 << "\n" << heavy_rain11 << "\n"
		<< heavy_rain12 << "\n" << heavy_rain13 << "\n" << heavy_rain14 << "\n" << heavy_rain15 << "\n" << heavy_rain16 << "\n";
	cout << "Bummer! It's pouring rain! You won't be able to sell a lot of lemonade. \n";
	cout << "Press any key to continue...";
	cin.ignore();








	return 0;
}