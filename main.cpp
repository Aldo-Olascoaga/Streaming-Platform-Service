// Developer's name: Aldo Olascoaga Olmedo
// Developer's email: aldo_olascoaga@outlook.com
// Project name: Streaming Platform Service
// Date: June 17th 2022

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include <unistd.h>
#include "Date.h"
#include "Episode.h"
#include "Video.h"
#include "Movie.h"
#include "Series.h"
using namespace std;

// Release date for coming movies
Date releaseDate(7,1,2022);
Date releaseDate2(6,20,2022);
Date releaseDate3(7,31,2022);
Date releaseDate4(8,9,2022);
Date releaseDate5(7,18,2022);
Date releaseDate6(6,21,2022);
Date releaseDate7(6,25,2022);
Date releaseDate8(7,10,2022);
Date releaseDate9(8,2,2022);
Date releaseDate10(7,11,2022);


// Release date for coming series
Date releaseDateSeries(7,15,2022);
Date releaseDateSeries2(8,1,2022);
Date releaseDateSeries3(6,20,2022);
Date releaseDateSeries4(7,10,2022);
Date releaseDateSeries5(8,2,2022);

//Vector of coming movies using pointers
vector <Video*> comingMovies {new Movie("TBC", "The Joker", "Drama", 122, 5, "Joaquin Phoenix, Robert De Niro, Zazie Beetz and Frances Conroy", releaseDate), new Movie("TBC", "Coco", "Animated", 105, 5, "Anthony Gonzalez, Gael García Bernal, Benjamin Brat, Alanna Ubach, Renée Victor, Ana Ofelia Murguía and Edward James Olmos", releaseDate2), new Movie("TBC", "Mr. Bean's Holiday", "Comedy", 89, 4, "Rowan Atkinson, Emma de Caunes, Max Baldry and Willem Dafoe", releaseDate3), new Movie("TBC", "Ratatouille", "Animated/Comedy", 111, 4, "Patton Oswalt, Ian Holm, and Lou Romano", releaseDate4), new Movie("TBC", "Encanto", "Animated", 102, 4, "Stephanie Beatriz, María Cecilia Botero, John Leguizamo and Mauro Castillo", releaseDate5), new Movie("TBC", "Star Wars: The Rise of Skywalker", "Action", 142, 5, "Carrie Fisher, Mark Hamill, Adam Driver, Daisy Ridley, John Boyega, Oscar Isaac and Anthony Daniels", releaseDate6), new Movie("TBC", "Finding Nemo", "Animated", 100, 4, "Albert Brooks, Ellen DeGeneres, Alexander Gould, Willem Dafoe and Geoffrey Rush", releaseDate7), new Movie("TBC", "Luca", "Animated", 95, 5, "Jacob Tremblay, Jack Dylan Grazer and Emma Berman", releaseDate8), new Movie("TBC", "The Polar Express", "Animated/Adventure", 100, 5, "Tom Hanks, Daryl Sabara, Nona Gaye, Jimmy Bennett and Eddie Deezen", releaseDate9), new Movie("TBC", "Cruella", "Live Action", 134, 4, "Emma Stone", releaseDate10)};



// Vector of coming series using pointers
vector <Video*> comingSeries {new Series("TBC", "The Book of Boba Fett", "Drama/Action", 50, 5, 1, 7, "Temuera Morrison, Ming-Na Wen and Pedro Pascal", releaseDateSeries), new Series("TBC", "The Crown", "Drama", 60, 5, 4, 40, "Claire Foy and Olivia Colman as The Queen", releaseDateSeries2), new Series("TBC", "Peacemaker", "Action", 46, 4, 1, 8, "Jhon Cena", releaseDateSeries3), new Series("TBC", "Monsters at Work", "Animated", 23, 4, 1, 10, "Billy Crystal, John Goodman and Ben Feldman", releaseDateSeries4), new Series("TBC", "SpongeBob SquarePants", "Animated", 25, 5, 13, 276, "Tom Kenny, Bill Fagerbakke, Rodger Bumpass, Clancy Brown and Mr. Lawrence", releaseDateSeries5)};


// ------------------------------------------
// Vector of movies
vector <Movie> movies;

// Vector of series
vector <Series> series;
// --------------------------------

// ------------------------------------------

// Vectors for seasons and their episodes

// Obi-Wan Kenobi
vector <Episode> OWKSeason1;

// The Mandalorian
vector <Episode> MandalorianS1;
vector <Episode> MandalorianS2;

// Black Mirror
vector <Episode> BlackMirrorS1;
vector <Episode> BlackMirrorS2;
vector <Episode> BlackMirrorS3;
vector <Episode> BlackMirrorS4;
vector <Episode> BlackMirrorS5;

// The Ranch
vector <Episode> TheRanchS1;
vector <Episode> TheRanchS2;
vector <Episode> TheRanchS3;

// Ted Lasso
vector <Episode> TedLassoS1;
vector <Episode> TedLassoS2;

// ------------------------------------------


int main() {
  
// Initialising all movies
Movie m1("1", "Batman Begins", "Action", 142, 3, "Christian Bale, Liam Neeson, Michael Caine, Katie Holmes, Gary Oldman and Cillian Murphy", Date(1,1,2022));
movies.push_back(m1);

Movie m2("2", "Batman: The dark knight", "Action", 152, 5, "Christian Bale, Gary Oldman, Heath Ledger, Morgan Freeman and Michael Caine", Date(2,1,2022));
movies.push_back(m2);
  
Movie m3("3", "Shrek", "Animated/Comedy", 90, 4, "Mike Myers, Eddie Murphy, Cameron Diaz and John Lithgow", Date(3,1,2022));
movies.push_back(m3);

Movie m4("4", "Cars", "Animated/Comedy", 117, 3, "Owen Wilson, Paul Newman, Bonnie Hunt and Larry the Cable Guy", Date(1,1,2022));
movies.push_back(m4);

Movie m5("5", "The Avengers", "Action", 143, 4, "Robert Downey Jr., Chris Evans, Mark Ruffalo, Chris Hemsworth, Scarlett Johansson, Jeremy Renner, Tom Hiddleston, Clark Gregg, Cobie Smulders, Stellan Skarsgård, Samuel L. Jackson", Date(5,1,2022));
movies.push_back(m5);

Movie m6("6", "Toy Story", "Animated/Comedy", 81, 4, "Tom Hanks, Tim Allen, Don Rickles, Jim Varney and Wallace Shawn", Date(1,15,2022));
movies.push_back(m6);

Movie m7("7", "Toy Story 2", "Animated/Comedy", 92, 5, "Tom Hanks and Tim Allen", Date(5,1,2022));
movies.push_back(m7);

Movie m8("8", "Toy Story 3", "Animated/Comedy", 103, 5, "Tom Hanks, Tim Allen, Joan Cusack, Don Rickles, Wallace Shawn and Michael Keaton", Date(1,18,2022));
movies.push_back(m8);

Movie m9("9", "Monsters, Inc.", "Action", 92, 5, "John Goodman, Billy Crystal, Steve Buscemi, James Coburn, Jennifer Tilly and Mary Gibbs", Date(2,1,2022));
movies.push_back(m9);

Movie m10("10", "The Lion King", "Drama", 118, 4, "Donald Glover, Seth Rogen, Chiwetel Ejiofor, Alfre Woodard, Billy Eichner, John Kani, John Oliver, Beyoncé Knowles-Carter and James Earl Jones", Date(1,11,2022));
movies.push_back(m10);

Movie m11("11", "Thor", "Action", 114, 4, "Chris Hemsworth, Natalie Portman, Tom Hiddleston, Stellan Skarsgård, Colm Feore and Ray Stevenson", Date(6,1,2022));
movies.push_back(m11);

Movie m12("12", "Captain America: The First Avenger", "Action", 124, 4, "Chris Evans, Tommy Lee Jones, Hugo Weaving, Hayley Atwell and Sebastian Stan", Date(1,3,2022));
movies.push_back(m12);

Movie m13("13", "Hulk", "Action", 138, 3, "Eric Bana, Jennifer Connelly, Sam Elliott, Josh Lucas and Nick Nolte", Date(1,10,2022));
movies.push_back(m13);

Movie m14("14", "Iron Man", "Action", 126, 4, "Robert Downey Jr., Terrence Howard, Jeff Bridges, Shaun Touband and Gwyneth Paltrow", Date(5,1,2022));
movies.push_back(m14);

Movie m15("15", "Star Wars: A New Hope", "Science fiction", 121, 5, "Mark Hamill, Harrison Ford, Carrie Fisher, Peter Cushing and Alec Guinness", Date(1,1,2022));
movies.push_back(m15);

Movie m16("16", "Star Wars: The Empire Strikes Back", "Science fiction", 124, 5, "Mark Hamill, Harrison Ford, Carrie Fisher, Billy Dee Williams,, Anthony Daniels, David Prowse, Kenny Baker, Peter Mayhew and Frank Oz", Date(3,10,2022));
movies.push_back(m16);

Movie m17("17", "Star Wars: Return of the Jedi", "Science fiction", 132, 5, "Mark Hamill, Harrison Ford, Carrie Fisher, Billy Dee Williams, Anthony Daniels, David Prowse, Kenny Baker, Peter Mayhew and Frank Oz", Date(1,1,2022));
movies.push_back(m17);

Movie m18("18", "Forest Gump", "Comedy", 142, 5, "Tom Hanks, Robin Wright, Gary Sinise, Mykelti Williamson and Sally Field", Date(1,12,2022));
movies.push_back(m18);

Movie m19("19", "The Little Rascals", "Comedy", 82, 5, "Travis Tedford, Kevin Jamal Woods, Jordan Warkol, Zachary Mabry, Ross Elliot Bagley, Courtland Mead, Sam Saletta, Blake Jeremy Collins, Blake McIver Ewing, Juliette Brewer, Heather Karasek and Brittany Ashton Holmes", Date(1,2,2022));
movies.push_back(m19);

Movie m20("20", "Her", "Drama", 126, 5, "Joaquin Phoenix, Amy Adams, Rooney Mara, Olivia Wilde and Scarlett Johansson", Date(6,13,2022));
movies.push_back(m20);


// ------------------------------------------------------------
  

// Initialising series
Series series1("1", "Obi-Wan Kenobi", "Drama/Action", 45, 5, 1, 6, "Ewan McGregor", releaseDateSeries);
series.push_back(series1);

Series series2("2", "The Mandalorian", "Drama/Action", 47, 5, 2, 16, "Pedro Pascal, Gina Carano, Temuera Morrison, Giancarlo Esposito and Carl Weathers", Date(11,1,2020));
series.push_back(series2);

Series series3("3", "Black Mirror", "Science fiction", 55, 5, 4, 22, "Bryce Dallas Howard, Hayley Atwell, Miley Cyrus, Alex Lawther and Jon Hamm", Date(6,14,2020));
series.push_back(series3);

Series series4("4", "The Ranch", "Comedy", 30, 4, 3, 30, "Ashton Kutcher, Danny Masterson, Debra Winger, Sam Elliott, Elisha Cuthbert", Date(5,5,2020));
series.push_back(series4);

Series series5("5", "Ted Lasso", "Comedy", 28, 5, 2, 22, "Jason Sudeikis, Hannah Waddingham, Jeremy Swift, Phil Dunster, Brett Goldstein, Brendan Hunt, Nick Mohammed, Juno Temple and Sarah Niles", Date(1,1,2021));
series.push_back(series5);


// ------------------------------------------------------------

// Initialising Obi-Wan Kenobi Season 1 episodes
Episode OBWKS1Ep1("1", "Part I", "Drama/Action", 55, 4);
OWKSeason1.push_back(OBWKS1Ep1);

Episode OBWKS1Ep2("2", "Part II", "Drama/Action", 51, 4);
OWKSeason1.push_back(OBWKS1Ep2);

Episode OBWKS1Ep3("3", "Part III", "Drama/Action", 48, 5);
OWKSeason1.push_back(OBWKS1Ep3);

Episode OBWKS1Ep4("4", "Part IV", "Drama/Action", 38, 4);
OWKSeason1.push_back(OBWKS1Ep4);

Episode OBWKS1Ep5("1", "Part V", "Drama/Action", 50, 4);
OWKSeason1.push_back(OBWKS1Ep5);

Episode OBWKS1Ep6("1", "Part VI", "Drama/Action", 47, 5);
OWKSeason1.push_back(OBWKS1Ep6);

// -------------------------------------------------------------

// Initialising The Mandalorian Season 1 episodes
Episode MandalorianS1Ep1("1", "The Mandalorian", "Drama/Action", 40, 4);
MandalorianS1.push_back(MandalorianS1Ep1);

Episode MandalorianS1Ep2("2", "The Child", "Drama/Action", 45, 5);
MandalorianS1.push_back(MandalorianS1Ep2);

Episode MandalorianS1Ep3("3", "The Sin", "Drama/Action", 52, 4);
MandalorianS1.push_back(MandalorianS1Ep3);

Episode MandalorianS1Ep4("4", "Sanctuary", "Drama/Action", 47, 4);
MandalorianS1.push_back(MandalorianS1Ep4);

Episode MandalorianS1Ep5("5", "The Gunslinger", "Drama/Action", 45, 4);
MandalorianS1.push_back(MandalorianS1Ep5);

Episode MandalorianS1Ep6("6", "The Prisoner", "Drama/Action", 44, 4);
MandalorianS1.push_back(MandalorianS1Ep6);

Episode MandalorianS1Ep7("7", "The Reckoning", "Drama/Action", 51, 4);
MandalorianS1.push_back(MandalorianS1Ep7);

Episode MandalorianS1Ep8("8", "Redemption", "Drama/Action", 47, 4);
MandalorianS1.push_back(MandalorianS1Ep8);
  
// ------------------------------------------------------------

// Initialising The Mandalorian Season 2 episodes
Episode MandalorianS2Ep1("1", "The Marshal", "Drama/Action", 54, 4);
MandalorianS2.push_back(MandalorianS2Ep1);

Episode MandalorianS2Ep2("2", "The Passenger", "Drama/Action", 42, 5);
MandalorianS2.push_back(MandalorianS2Ep2);

Episode MandalorianS2Ep3("3", "The Heiress", "Drama/Action", 36, 4);
MandalorianS2.push_back(MandalorianS2Ep3);

Episode MandalorianS2Ep4("4", "The Siege", "Drama/Action", 40, 4);
MandalorianS2.push_back(MandalorianS2Ep4);

Episode MandalorianS2Ep5("5", "The Jedi", "Drama/Action", 47, 5);
MandalorianS2.push_back(MandalorianS2Ep5);

Episode MandalorianS2Ep6("6", "The Tragedy", "Drama/Action", 34, 5);
MandalorianS2.push_back(MandalorianS2Ep6);

Episode MandalorianS2Ep7("7", "The Believer", "Drama/Action", 39, 4);
MandalorianS2.push_back(MandalorianS2Ep7);

Episode MandalorianS2Ep8("8", "The Rescue", "Drama/Action", 47, 5);
MandalorianS2.push_back(MandalorianS2Ep8);

// ------------------------------------------------------------

// Initialising Black Mirror Season 1 episodes
Episode BlackMirrorS1Ep1("1", "The National Anthem", "Science fiction", 50, 3);
BlackMirrorS1.push_back(BlackMirrorS1Ep1);

Episode BlackMirrorS1Ep2("2", "Million Merits", "Science fiction", 52, 4);
BlackMirrorS1.push_back(BlackMirrorS1Ep2);

Episode BlackMirrorS1Ep3("3", "Million Merits", "Science fiction", 48, 4);
BlackMirrorS1.push_back(BlackMirrorS1Ep3);

// Initialising Black Mirror Season 2 episodes

Episode BlackMirrorS2Ep1("1", "Be right back", "Science fiction", 51, 5);
BlackMirrorS2.push_back(BlackMirrorS2Ep1);

Episode BlackMirrorS2Ep2("2", "Be right back", "Science fiction", 49, 4);
BlackMirrorS2.push_back(BlackMirrorS2Ep2);

Episode BlackMirrorS2Ep3("3", "The Waldo Moment", "Science fiction", 49, 4);
BlackMirrorS2.push_back(BlackMirrorS2Ep3);

Episode BlackMirrorS2Ep4("3", "White Christmas", "Science fiction", 54, 5);
BlackMirrorS2.push_back(BlackMirrorS2Ep4);

// Initialising Black Mirror Season 3 episodes
  
Episode BlackMirrorS3Ep1("1", "Nosedive", "Science fiction", 48, 3);
BlackMirrorS3.push_back(BlackMirrorS3Ep1);

Episode BlackMirrorS3Ep2("2", "Playtest", "Science fiction", 55, 5);
BlackMirrorS3.push_back(BlackMirrorS3Ep2);

Episode BlackMirrorS3Ep3("3", "Shut up and dance", "Science fiction", 59, 5);
BlackMirrorS3.push_back(BlackMirrorS3Ep3);

Episode BlackMirrorS3Ep4("4", "San Junipero", "Science fiction", 55, 4);
BlackMirrorS3.push_back(BlackMirrorS3Ep4);

Episode BlackMirrorS3Ep5("5", "Men against fire", "Science fiction", 50, 5);
BlackMirrorS3.push_back(BlackMirrorS3Ep5);

Episode BlackMirrorS3Ep6("6", "Hated in the nation", "Science fiction", 50, 4);
BlackMirrorS3.push_back(BlackMirrorS3Ep6);

// Initialising Black Mirror Season 4 episodes
Episode BlackMirrorS4Ep1("1", "USS Callister", "Science fiction", 53, 4);
BlackMirrorS4.push_back(BlackMirrorS4Ep1);

Episode BlackMirrorS4Ep2("2", "Arkangel", "Science fiction", 55, 5);
BlackMirrorS4.push_back(BlackMirrorS4Ep2);

Episode BlackMirrorS4Ep3("3", "Crocodile", "Science fiction", 54, 5);
BlackMirrorS4.push_back(BlackMirrorS4Ep3);
  
Episode BlackMirrorS4Ep4("4", "Hang the DJ", "Science fiction", 55, 4);
BlackMirrorS4.push_back(BlackMirrorS4Ep4);

Episode BlackMirrorS4Ep5("5", "Metalhead", "Science fiction", 57, 4);
BlackMirrorS4.push_back(BlackMirrorS4Ep5);

Episode BlackMirrorS4Ep6("6", "Black Museum", "Science fiction", 52, 4);
BlackMirrorS4.push_back(BlackMirrorS4Ep6);

// Initialising Black Mirror Season 5 episodes

Episode BlackMirrorS5Ep1("1", "Striking vipers", "Science fiction", 52, 4);
BlackMirrorS5.push_back(BlackMirrorS5Ep1);

Episode BlackMirrorS5Ep2("2", "Smithereens", "Science fiction", 52, 4);
BlackMirrorS5.push_back(BlackMirrorS5Ep2);

Episode BlackMirrorS5Ep3("3", "Rachel, Jack and Ashley Too", "Science fiction", 52, 5);
BlackMirrorS5.push_back(BlackMirrorS5Ep3);

// ------------------------------------------------------------

// Initialising The Ranch Season 1 episodes
Episode TheRanchS1Ep1("1", "Back Where I Come From", "Comedy", 30, 4);
TheRanchS1.push_back(TheRanchS1Ep1);

Episode TheRanchS1Ep2("2", "Some People Change", "Comedy", 32, 3);
TheRanchS1.push_back(TheRanchS1Ep2);

Episode TheRanchS1Ep3("3", "The Boys of Fall", "Comedy", 29, 5);
TheRanchS1.push_back(TheRanchS1Ep3);

Episode TheRanchS1Ep4("4", "Got a Little Crazy", "Comedy", 29, 5);
TheRanchS1.push_back(TheRanchS1Ep4);

Episode TheRanchS1Ep5("5", "American Kids", "Comedy", 28, 4);
TheRanchS1.push_back(TheRanchS1Ep5);

Episode TheRanchS1Ep6("6", "Better as a Memory", "Comedy", 31, 5);
TheRanchS1.push_back(TheRanchS1Ep6);

Episode TheRanchS1Ep7("7", "I Can't Go There", "Comedy", 30, 4);
TheRanchS1.push_back(TheRanchS1Ep7);

Episode TheRanchS1Ep8("8", "Til It's Gone", "Comedy", 28, 5);
TheRanchS1.push_back(TheRanchS1Ep8);

Episode TheRanchS1Ep9("9", "There Goes My Life", "Comedy", 33, 4);
TheRanchS1.push_back(TheRanchS1Ep9);

Episode TheRanchS1Ep10("10", "Down the Road", "Comedy", 33, 5);
TheRanchS1.push_back(TheRanchS1Ep10);

// Initialising The Ranch Season 2 episodes

Episode TheRanchS2Ep1("1", "Gone as a Girl Can Get", "Comedy", 31, 4);
TheRanchS2.push_back(TheRanchS1Ep1);

Episode TheRanchS2Ep2("2", "Living and Living Well", "Comedy", 30, 4);
TheRanchS2.push_back(TheRanchS2Ep2);

Episode TheRanchS2Ep3("3", 	"Sittin' on the Fence", "Comedy", 27, 5);
TheRanchS2.push_back(TheRanchS2Ep3);

Episode TheRanchS2Ep4("4", "Let's Fall to Pieces Together", "Comedy", 28, 4);
TheRanchS2.push_back(TheRanchS2Ep4);

Episode TheRanchS2Ep5("5", "I Know She Still Loves Me", "Comedy", 32, 4);
TheRanchS2.push_back(TheRanchS2Ep5);

Episode TheRanchS2Ep6("6", "Easy Come, Easy Go", "Comedy", 30, 5);
TheRanchS2.push_back(TheRanchS2Ep6);

Episode TheRanchS2Ep7("7", "I've Come to Expect It from You", "Comedy", 30, 5);
TheRanchS2.push_back(TheRanchS2Ep7);

Episode TheRanchS2Ep8("8", "The Cowboy Rides Away", "Comedy", 28, 4);
TheRanchS2.push_back(TheRanchS2Ep8);

Episode TheRanchS2Ep9("9", "Leavin's Been Comin' (For a Long, Long Time)", "Comedy", 29, 4);
TheRanchS2.push_back(TheRanchS2Ep9);

Episode TheRanchS2Ep10("10", "Merry Christmas (Wherever You Are)", "Comedy", 31, 5);
TheRanchS2.push_back(TheRanchS2Ep10);

// Initialising The Ranch Season 3 episodes
Episode TheRanchS3Ep1("1", "My Next Thirty Years", "Comedy", 30, 5);
TheRanchS3.push_back(TheRanchS3Ep1);

Episode TheRanchS3Ep2("2", "Things Change", "Comedy", 31, 4);
TheRanchS3.push_back(TheRanchS3Ep2);

Episode TheRanchS3Ep3("3", "Take Me Away from Here", "Comedy", 29, 4);
TheRanchS3.push_back(TheRanchS3Ep3);

Episode TheRanchS3Ep4("4", "She'll Have You Back", "Comedy", 27, 3);
TheRanchS3.push_back(TheRanchS3Ep4);

Episode TheRanchS3Ep5("5", "My Best Friend", "Comedy", 27, 3);
TheRanchS3.push_back(TheRanchS3Ep5);

Episode TheRanchS3Ep6("6", "Find Out Who Your Friends Are", "Comedy", 29, 4);
TheRanchS3.push_back(TheRanchS3Ep6);

Episode TheRanchS3Ep7("7", "One of Those Nights", "Comedy", 28, 4);
TheRanchS3.push_back(TheRanchS3Ep7);

Episode TheRanchS3Ep8("8", "I Didn't Ask and She Didn't Say", "Comedy", 28, 5);
TheRanchS3.push_back(TheRanchS3Ep8);

Episode TheRanchS3Ep9("9", "Last Dollar (Fly Away)", "Comedy", 30, 4);
TheRanchS3.push_back(TheRanchS3Ep9);

Episode TheRanchS3Ep10("10", "Can't Really Be Gone", "Comedy", 29, 5);
TheRanchS3.push_back(TheRanchS3Ep10);

// ------------------------------------------------------------

// Initialising Ted Lasso Season 1 episodes

Episode TedLassoS1Ep1("1", "Pilot", "Comedy", 29, 4);
TedLassoS1.push_back(TedLassoS1Ep1);

Episode TedLassoS1Ep2("2", "Biscuits", "Comedy", 230, 4);
TedLassoS1.push_back(TedLassoS1Ep2);

Episode TedLassoS1Ep3("3", "Trent Crimm: The Independent", "Comedy", 28, 5);
TedLassoS1.push_back(TedLassoS1Ep3);

Episode TedLassoS1Ep4("4", 	"For the Children", "Comedy", 31, 5);
TedLassoS1.push_back(TedLassoS1Ep4);

Episode TedLassoS1Ep5("5", 	"Tan Lines", "Comedy", 30, 4);
TedLassoS1.push_back(TedLassoS1Ep5);

Episode TedLassoS1Ep6("6", 	"Two Aces", "Comedy", 32, 5);
TedLassoS1.push_back(TedLassoS1Ep6);

Episode TedLassoS1Ep7("7", 	"Make Rebecca Great Again", "Comedy", 29, 5);
TedLassoS1.push_back(TedLassoS1Ep7);

Episode TedLassoS1Ep8("8", 	"The Diamond Dogs", "Comedy", 33, 4);
TedLassoS1.push_back(TedLassoS1Ep8);

Episode TedLassoS1Ep9("9", 	"All Apologies", "Comedy", 31, 4);
TedLassoS1.push_back(TedLassoS1Ep9);

Episode TedLassoS1Ep10("10", 	"The Hope that Kills You", "Comedy", 28, 5);
TedLassoS1.push_back(TedLassoS1Ep10);

// Initialising Ted Lasso Season 2 episodes

Episode TedLassoS2Ep1("1", "Goodbye Earl", "Comedy", 30, 5);
TedLassoS2.push_back(TedLassoS2Ep1);

Episode TedLassoS2Ep2("2", "Lavender", "Comedy", 31, 4);
TedLassoS2.push_back(TedLassoS2Ep2);

Episode TedLassoS2Ep3("3", "Do the Right-est Thing", "Comedy", 30, 4);
TedLassoS2.push_back(TedLassoS2Ep3);

Episode TedLassoS2Ep4("4", "Carol of the Bells", "Comedy", 29, 3);
TedLassoS2.push_back(TedLassoS2Ep4);

Episode TedLassoS2Ep5("5", 	"Rainbow", "Comedy", 30, 5);
TedLassoS2.push_back(TedLassoS2Ep5);

Episode TedLassoS2Ep6("6", "The Signal", "Comedy", 28, 5);
TedLassoS2.push_back(TedLassoS2Ep6);

Episode TedLassoS2Ep7("7", "Headspace", "Comedy", 29, 4);
TedLassoS2.push_back(TedLassoS2Ep7);

Episode TedLassoS2Ep8("8", "Man City", "Comedy", 31, 5);
TedLassoS2.push_back(TedLassoS2Ep8);

Episode TedLassoS2Ep9("9", "Beard After Hours", "Comedy", 30, 4);
TedLassoS2.push_back(TedLassoS2Ep9);

Episode TedLassoS2Ep10("10", "No Weddings and a Funeral", "Comedy", 33, 4);
TedLassoS2.push_back(TedLassoS2Ep10);

Episode TedLassoS2Ep11("11", 	"Midnight Train to Royston", "Comedy", 30, 5);
TedLassoS2.push_back(TedLassoS2Ep11);

Episode TedLassoS2Ep12("12", 	"Inverting the Pyramid of Success", "Comedy", 29, 5);
TedLassoS2.push_back(TedLassoS2Ep12);



// Giving a warm welcome...
cout << "\n---***** Welcome to Aldo+, your favourite place to watch anything you wish!---*****" << endl;
  
  // Deploying the menu...
  int option;
  cout << "\nThis is the menu Aldo+ offers you:" << endl;
  cout << "\n1.- Load data file with all the movies and series available on the platform \n2.- Show all movies and series and their ratings \n3.- Show all episodes of a series and their ratings \n4.- Show all the movies by their genre and their ratings \n5.- Rate a video (movie or a series) \n6.- Show all movies that are coming soon to Aldo+ ! \n7.- Show all series that are coming soon to Aldo+ !\n8.- Exit" << endl;
  cout << "\nNow please choose an option depending on what you'd like to do.\n \nOption: ";
  cin >> option;

  
char answer;
int num;
int index;

// Switch case for the menu:
  switch (option) {
    case 1: {
      cout << "\nLoading file... " << endl;
      cout << "\nThese are all the movies and series which are available on the platform: \n" << endl;

    // Exception handling
    try {
      ifstream myFile;
      myFile.open("videos.txt");
      string str;
      if(myFile) {
      ostringstream ss;
      ss << myFile.rdbuf(); // reading data
      str = ss.str();
      }
      cout<<str;
      myFile.close();

      if (myFile.fail()){
        throw 3312;
      }  
  } catch (int a){
      cout << "\n* No such file with videos provided. We're sorry!" << endl;
      return EXIT_SUCCESS;
  }

      // After 5 seconds, a thank you message appears on the screen.
      sleep(5);
      cout << "\n\nThanks for taking a look at our catalogue!";
    }
      break;
      
    case 2: {
      cout << "\n\nThese are all the movies and series which are available on the platform and their ratings: \n" << endl;

    // Exception handling
    try {
      ifstream myVideosRating;
      myVideosRating.open("videosRatings.txt");
      string str;
     if(myVideosRating) {
      ostringstream ss;
      ss << myVideosRating.rdbuf(); // reading data
      str = ss.str();
    }
    cout<<str;
    myVideosRating.close();

    if (myVideosRating.fail()){
      throw 911;
  }} catch (int b) {
      cout << "\n* No such file with movies and series provided. We're sorry!" << endl;
      return EXIT_SUCCESS;
  }    
    cout << "\n\n\n";

      // Displaying all movies...
      for (int m = 0; m < movies.size(); m++){
        cout << "\n***** Movie available on Aldo+ *****\n",  movies[m].showDetails(), movies[m].showCast();
        cout << endl;
        cout << "--------------------------------------------------\n";
      }

      // Displaying all series...
      for (int s = 0; s < series.size(); s++){
        cout << "\n***** Series available on Aldo+ *****\n", series[s].showDetails();
        cout << "--------------------------------------------------\n";
      }

      cout << "\n\nSPOILER ALERT! More movies and series are coming to Aldo+ very soon..." << endl;
      return EXIT_SUCCESS;
  }
      break;
  
    case 3: {
      cout << "\n----° These are all the series and their episodes by season available on Aldo+ °----" << endl;

    // Exception handling
    try {  
      ifstream seriesFile;
      seriesFile.open("SeriesAndEpisodes.txt");
      string str;
     if(seriesFile) {
      ostringstream ss;
      ss << seriesFile.rdbuf(); // reading data
      str = ss.str();
      }
      cout<<str;
      seriesFile.close();

      if (seriesFile.fail()){
        throw 100;
      }
  } catch (int c){
      cout << "\n* No such file with series and episodes provided. We're sorry!" << endl;
      return EXIT_SUCCESS;
  }
      
    cout << "\n\nWhich series do you want to watch? (type its number index): ";
    cin >> index;
    switch (index) {
      case 1: {
        cout << "\n--- Series details --- "<< endl, series.at(index-1).showDetails();
        cout << "\nWhich season would you like to watch? ";
        cin >> index;
        if (index == 1){
          cout << "\nThese are all the available episodes on season and their details " << index << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < OWKSeason1.size(); i++){
          cout << OWKSeason1[i].getName() << endl;
          cout << "\n", OWKSeason1[i].showDetails();
          cout << "-------------------------------------" << endl;
          cout << endl;
        }
        } else {
          cout << "\nInvalid input! Please restart the programme.";
          return EXIT_SUCCESS;
        }

        // After 5 seconds, the programme displays a message as if you would've watched the entire series in that period of time
        sleep(5);
        cout << "\nThanks for watching Obi-Wan Kenobi!" << endl;
        return EXIT_SUCCESS;
      }
      break;
    
      case 2:{
        cout << "\n--- Series details --- "<< endl, series.at(index-1).showDetails();
        cout << "\nWhich season would you like to watch? ";
        cin >> index;
        if (index == 1){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < MandalorianS1.size(); i++){
          cout << MandalorianS1[i].getName() << endl;
          cout << "\n", MandalorianS1[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
        } else if (index == 2){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < MandalorianS2.size(); i++){
          cout << MandalorianS2[i].getName() << endl;
          cout << "\n", MandalorianS2[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }} else{
          cout << "\nInvalid input! Please restart the programme.";
          return EXIT_SUCCESS;
        }
        // After 5 seconds, the programme displays a message as if you would've watched the entire series in that period of time
        sleep(5);
        cout << "\nThanks for watching The Mandalorian!" << endl;
        return EXIT_SUCCESS;
        }
      break;

      case 3: {
        cout << "\n--- Series details --- "<< endl, series.at(index-1).showDetails();
        cout << "\nWhich season would you like to watch? ";
        cin >> index;
        if (index == 1){
          cout << "\nThese are all the available episodes on season " << index << " and their details"  << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < BlackMirrorS1.size(); i++){
          cout << BlackMirrorS1[i].getName() << endl;
          cout << "\n", BlackMirrorS1[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
        } else if (index == 2){
          cout << "\nThese are all the available episodes on season " << index << " and their details"  << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < BlackMirrorS2.size(); i++){
          cout << BlackMirrorS2[i].getName() << endl;
          cout << "\n", BlackMirrorS2[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }} else if (index == 3){
          cout << "\nThese are all the available episodes on season " << index << " and their details"  << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < BlackMirrorS3.size(); i++){
          cout << BlackMirrorS3[i].getName() << endl;
          cout << "\n", BlackMirrorS3[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
        }
        else if (index == 4){
          cout << "\nThese are all the available episodes on season " << index << " and their details"  << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < BlackMirrorS4.size(); i++){
          cout << BlackMirrorS4[i].getName() << endl;
          cout << "\n", BlackMirrorS4[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
      } else if (index == 5){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < BlackMirrorS5.size(); i++){
          cout << BlackMirrorS5[i].getName() << endl;
          cout << "\n", BlackMirrorS5[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
      }
        else {
          cout << "\nInvalid input! Please restart the programme.";
          return EXIT_SUCCESS;
        }
        
        // After 5 seconds, the programme displays a message as if you would've watched the entire series in that period of time
        sleep(5);
        cout << "\nThanks for watching Black Mirror!" << endl;
        return EXIT_SUCCESS;
        }
      break;
    break;

      case 4: {
        cout << "\n--- Series details --- "<< endl, series.at(index-1).showDetails();
        cout << "\nWhich season would you like to watch? ";
        cin >> index;
        if (index == 1){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < TheRanchS1.size(); i++){
          cout << TheRanchS1[i].getName() << endl;
          cout << "\n", TheRanchS1[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
        } else if (index == 2){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < TheRanchS2.size(); i++){
          cout << TheRanchS2[i].getName() << endl;
          cout << "\n", TheRanchS2[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }} else if (index == 3){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < TheRanchS3.size(); i++){
          cout << TheRanchS3[i].getName() << endl;
          cout << "\n", TheRanchS3[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }}
        else{
          cout << "\nInvalid input! Please restart the programme.";
          return EXIT_SUCCESS;
        }

        // After 5 seconds, the programme displays a message as if you would've watched the entire series in that period of time
        sleep(5);
        cout << "\nThanks for watching The Ranch!" << endl;
        return EXIT_SUCCESS;
      break;

      case 5: {
        cout << "\n--- Series details --- "<< endl, series.at(index-1).showDetails();
        cout << "\nWhich season would you like to watch? ";
        cin >> index;
        if (index == 1){
          cout << "\nThese are all the available episodes on season " << index << " and their details"<< endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < TedLassoS1.size(); i++){
          cout << TedLassoS1[i].getName() << endl;
          cout << "\n", TedLassoS1[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }
        } else if (index == 2){
          cout << "\nThese are all the available episodes on season " << index << " and their details" << endl;
        cout << "\n--------------------------------* Season " << index << " *--------------------------------" << endl;
        for (int i = 0; i < TedLassoS2.size(); i++){
          cout << TedLassoS2[i].getName() << endl;
          cout << "\n", TedLassoS2[i].showDetails();
          cout << "\n-------------------------------------" << endl;
          cout << endl;
        }} else{
          cout << "\nInvalid input! Please restart the programme.";
          return EXIT_SUCCESS;
        }
        // After 5 seconds, the programme displays a message as if you would've watched the entire series in that period of time
        sleep(5);
        cout << "\nThanks for watching Ted Lasso!" << endl;
        return EXIT_SUCCESS;
        }
      break;

        default:
          cout << "\nInvalid input! Please try again by restarting the programme." << endl;
        return EXIT_SUCCESS;
      }
    }
    break;

    
}
    break;

    case 4: {
      cout << "\n---* These are all the available movies grouped by their genre * ---" << endl;

      // Validating this case...
      ifstream myMovies;
      myMovies.open("movies.txt");
      if (!myMovies.is_open()){
        cout << "\n* There's no information about movies. We're sorry!" << endl;
        return EXIT_SUCCESS;
      }
      
      cout << "\n----- ANIMATED/COMEDY -----" << endl;
      for (int i = 0; i < movies.size(); i++){
        if (movies[i].getGenre() == "Animated/Comedy"){
          cout << movies[i].getName(), movies[i].showRating();
          cout << "\n" << endl;
          }
        }

        cout << "----------------------------------------------";
        cout << "\n\n";
      
      cout << "\n----- ACTION -----" << endl;
      for (int i = 0; i < movies.size(); i++){
        if (movies[i].getGenre() == "Action"){
           cout << movies[i].getName(), movies[i].showRating();
           cout << "\n" << endl;
          }
        }

          cout << "----------------------------------------------";
          cout << "\n\n";

      cout << "\n----- DRAMA -----" << endl;
      for (int i = 0; i < movies.size(); i++){
        if (movies[i].getGenre() == "Drama"){
          cout << movies[i].getName(), movies[i].showRating();
          cout << "\n" << endl;
          }
        }

          cout << "----------------------------------------------";
          cout << "\n\n";

      
      cout << "\n----- COMEDY -----" << endl;
      for (int i = 0; i < movies.size(); i++){
        if (movies[i].getGenre() == "Comedy"){
          cout << movies[i].getName(), movies[i].showRating();
          cout << "\n" << endl;
          }
        }

      
      cout << "----------------------------------------------";
          cout << "\n\n";

      
       cout << "\n----- SCIENCE FICTION -----" << endl;
      for (int i = 0; i < movies.size(); i++){
        if (movies[i].getGenre() == "Science fiction"){
          cout << movies[i].getName(), movies[i].showRating();
          cout << "\n" << endl;
          }
        }

      cout << "----------------------------------------------";
          cout << "\n\n";

      
      cout << "\n*****- Thanks for taking a look at our catalogue! -*****" << endl;
      return EXIT_SUCCESS;
      }
    break;

    case 5: {
      cout << "\nWould you like to rate a movie (m) or a series (s)? ";
      cin >> answer;
      int rateValue;

      // Rating a movie and displaying all of them
      if (answer == 'M' || answer == 'm'){
      cout << "\n";

    // Exception handling
    try {
      ifstream myMovies;
      myMovies.open("movies.txt");
      string str;
      if(myMovies) {
      ostringstream ss;
      ss << myMovies.rdbuf(); // reading data
      str = ss.str();
      }
      cout<<str;
      myMovies.close();

      if (myMovies.fail()){
        throw 200;
      }
  } catch (int d){
      cout << "\n* No such file with movies provided. You can't rate a movie at the moment. We're sorry!" << endl;
      return EXIT_SUCCESS;
  }
        
        cout << "\n\nWhich movie would you like to rate? (type its number index): ";
        cin >> num;
        if (num < 1 || num > 20){
          cout << "\nInvalid input. Please try again by restarting the programme.";
          return EXIT_SUCCESS;
        }
        cout << "\nRate the movie from 1 to 5: ";
        cin >> rateValue;
        while (rateValue < 1 || rateValue > 5){
          cout << "\nInvalid input. Please enter a value between 1 and 5: ";
          cin >> rateValue;
        }
        cout << "\nNew rating for " << movies.at(num-1).getName() << " based on your liking: ";
        movies.at(num-1).setRating(rateValue);
        cout << movies.at(num-1).getRating() << endl;
        cout << "\n***** Thanks for visiting Aldo+ *****" << endl;
        cout << "\n-----***** GOODBYE! *****-----";
        return EXIT_SUCCESS;

        
        
      } else if (answer == 'S' || answer == 's'){ // Rating a series
      // Showing all the available series to the user

      // Exception handling
    try {
      ifstream mySeries;
      mySeries.open("series.txt");
      string str;
     if(mySeries) {
      ostringstream ss;
      ss << mySeries.rdbuf(); // reading data
      str = ss.str();
      cout << "\n";
      }
      cout<<str;
      mySeries.close();

      if (mySeries.fail()){
        throw 300;
      }
  } catch (int e){
      cout << "\n* No such file with series provided. You can't rate a series right now. We're sorry!" << endl;
      return EXIT_SUCCESS;
  }
        cout << "\n\nWhich series would you like to rate? (type its number index): ";
        cin >> num;
        if (num < 1 || num > 5){
          cout << "\nInvalid input. Please try again by restarting the programme.";
          return EXIT_SUCCESS;
        }
        cout << "\nRate the series from 1 to 5: ";
        cin >> rateValue;
        while (rateValue < 1 || rateValue > 5){
          cout << "\nInvalid input. Please enter a value between 1 and 5: ";
          cin >> rateValue;
        }
        cout << "\nNew rating for " << series.at(num-1).getName() << " based on your liking: ";
        series.at(num-1).setRating(rateValue);
        cout << series.at(num-1).getRating() << endl; 
        cout << "\n***** Thanks for visiting Aldo+ *****" << endl;
        cout << "\n-----***** GOODBYE! *****-----";
        return EXIT_SUCCESS;
      } else {
        cout << "\nInvalid input. Please try again by restarting the programme.";
          return EXIT_SUCCESS;
      }    
    }
    break;

      // Applying polymorphism and operator overloading (<<)...
    case 6: {
        cout << "\n***** These are the movies that are coming soon to Aldo + ! *****\n" << endl;
      for (auto* m : comingMovies){
        cout << "- " << m -> getName(), m -> getGenre(), m -> showRating();
        if (m -> getName() == "The Joker"){
          cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate << endl << "\n";
        } else if (m -> getName() == "Coco"){
          cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate2 << endl << "\n";
        } else if (m -> getName() == "Mr. Bean's Holiday"){
          cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate3 << endl << "\n";
        } else if (m -> getName() == "Ratatouille"){
          cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " <<  releaseDate4 << endl << "\n";
        } else if (m -> getName() == "Encanto"){
          cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate5 << endl << "\n";
        } else if (m -> getName() == "Star Wars: The Rise of Skywalker"){
          cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate6 << endl << "\n";
        } else if (m -> getName() == "Finding Nemo"){
           cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate7 << endl << "\n";
        } else if (m -> getName() == "Luca"){
           cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate8 << endl << "\n";
        } else if (m -> getName() == "The Polar Express"){
           cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate9 << endl << "\n";
        } else if (m -> getName() == "Cruella"){
           cout << "\nRelease date on Aldo+ (mm/dd/yyyy): " << releaseDate10 << endl << "\n";
        }
      }
      cout << "\n***** We hope you'll enjoy the coming movies! *****" << endl;
      cout << "\n-------------- Only on Aldo+ --------------" << endl;
      return EXIT_SUCCESS;
        }
    break;

      // Applying some more polymorphism and operator overloading (<<)...
    case 7: {
        cout << "\n○○○○○○~ These are the series that are coming very soon to Aldo+ ! ~○○○○○○\n" << endl;
        for (auto* s : comingSeries){
          cout << "- " << s -> getName(), s -> getGenre(), s -> showRating();
          if (s -> getName() == "The Book of Boba Fett"){
            cout << endl << "Release date on Aldo+: (mm/dd/yyyy): " << releaseDateSeries;
          cout << "\n" << endl;
          } else if (s -> getName() == "The Crown"){
            cout << endl << "Release date on Aldo+: (mm/dd/yyyy): " << releaseDateSeries2;
          cout << "\n" << endl;
          } else if (s -> getName() == "Peacemaker"){
            cout << endl << "Release date on Aldo+: (mm/dd/yyyy): " << releaseDateSeries3;
          cout << "\n" << endl;
          } else if (s -> getName() == "Monsters at Work"){
            cout << endl << "Release date on Aldo+: (mm/dd/yyyy): " << releaseDateSeries4;
          cout << "\n" << endl;
          } else {
            cout << endl << "Release date on Aldo+: (mm/dd/yyyy): " << releaseDateSeries5;
          cout << "\n" << endl;
          }  
      }

      cout << "\n***** We hope you'll enjoy the coming series! *****" << endl;
      cout << "\n-------------- Only on Aldo+ --------------" << endl;
      return EXIT_SUCCESS;
      break;
        }
    break;

    case 8: {
      cout << "\nOK. Thanks for visiting Aldo+" << endl;
      cout << "\n-----** GOODBYE! **-----" << endl;
      return EXIT_SUCCESS;
    }
    break;

    default:
      cout << "\nInvalid input! Please restart the programme and enter a valid option." << endl;
    return EXIT_SUCCESS;
    }


return EXIT_SUCCESS;
}

