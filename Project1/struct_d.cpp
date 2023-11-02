//#include <iostream>
//
//using namespace std;
//
//struct VideoShop {
//	double popularity_rating;
//	double disc_price;
//	char movie_titles[100];
//	char director[100];
//	char genre[100];
//};
//
//VideoShop** films = 0;
//
//const int max_film = 50;
//
//
//int current_film = 0;
//
//
//
//void addfilm(const char& movie_title, const char& director, const char& genre, double popularity_rating, double disc_price);
//void searchtitle(const char& movie_title);
//void searchgenre(const char& genre);
//void searchdirector(const char& director);
//void showfilms();
//
//
//
//int main() {
//
//	char choice{};
//
//	double popularity_rating{};
//	double disc_price{};
//	char movie_titles;
//	char director;
//	char genre;
//
//	do {
//		cout << "1)enter the name of the movie to add:" << endl;
//		cout << "2)search by movie title" << endl;
//		cout << "3)search by genre" << endl;
//		cout << "4)search by director" << endl;
//		cout << "5)most popular film in the genre" << endl;
//		cout << "6)show all entries" << endl;
//		cout << "7)exit" << endl;
//
//
//		cin >> choice;
//
//		switch (choice) {
//		case '1':
//			addfilm(movie_titles, director, genre, popularity_rating, disc_price);
//			continue;
//		case '2':
//			searchtitle(movie_titles);
//			break;
//		case '3':
//			searchgenre(genre);
//			break;
//		case '4':
//			searchdirector(director);
//			break;
//		case '5':
//			showfilms();
//			break;
//		}
//
//	} while (choice != '7');
//	
//
//}
//
//void addfilm(const char& movie_title, const char& director, const char& genre, double popularity_rating, double disc_price) {
//	if (current_film < max_film) {
//		Videoshop* film = new Videoshop;
//		cout << "enter movie titles: ";
//		cin >> film->movie_titles;
//		cout << "enter  the director: " << endl;
//		cin >> film->director;
//		cout << "enter the genre: " << endl;
//		cin >> film->genre;
//		cout << "enter popularity rating: " << endl;
//		cin >> film->popularity_rating;
//		cout << "enter the price of the disk" << endl;
//		cin >> film->disc_price;
//
//
//		films[current_film] = film;
//		current_film++;
//		cout << "movie added" << endl;
//	}
//	else {
//		cout << "filled!!!" << endl;
//	}
//}
//
//
//void searchtitle(const char& movie_title) {
//	char searchtitle[100];
//	cout << "enter the movie title";
//	cin >> searchtitle;
//	for (int i = 0; i < current_film; i++)
//	{
//		if (films[i]->movie_title == searchtitle) {
//			cout << "movie title: " << films[i]->movie_titles 
//				<< "director - " << films[i]->director <<"genre - " 
//				<< films[i]->genre << "popularity rating - " 
//				<< films[i]->popularity_rating
//				<< "disc price - " << films[i]->disc_price << endl;
//		}
//	}
//}
//
//void searchgenre(const char& genre) {
//	char searchgenre[100];
//	cout << "enter the movie title";
//	cin >> searchgenre;
//	for (int i = 0; i < current_film; i++)
//	{
//		if (films[i]->movie_title == searchgenre) {
//			cout << "movie title: " << films[i]->movie_titles
//				<< "director - " <<films[i]->director <<   "genre - "
//				<< films[i]->genre << "popularity rating - "
//				<< films[i]->popularity_rating
//				<< "disc price - " << films[i]->disc_price << endl;
//		}
//	}
//}
//
//void searchdirector(const char& director) {
//	char searchdirector[100];
//	cout << "enter the movie title";
//	cin >> searchdirector;
//	for (int i = 0; i < current_film; i++)
//	{
//		if (films[i]->movie_title == searchdirector) {
//			cout << "movie title: " << films[i]->movie_titles
//				<< "director - " << films[i]->director << "genre - "
//				<< films[i]->genre << "popularity rating - "
//				<< films[i]->popularity_rating
//				<< "disc price - " << films[i]->disc_price << endl;
//		}
//	}
//}
//
//void showfilms() {
//	for (int i = 0; i < current_film; i++)
//	{
//		cout << films[i]->movie_titles << films[i]->director << films[i]->genre << films[i]->popularity_rating << films[i]->disc_price << endl;
//	}
//	
//
//}
