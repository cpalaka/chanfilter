/*
 *      CHAN FILTER 
 *          -a work by Chaitanya Palaka, inspired by 4chan's gentoomen
 * 
 */

//TODO: profile entire code and see what is slowing things down so much
//TODO: implement more distance functions

//TODO: implement color segmenting <-- urgent

//NOTE: it could be worth multithreading this

//TODO: think about how i can write about this stuff in a blog post(or multiple) for example, line algo - SFML - setup in vscode, etc

//TODO: add more shapes that can be drawn

/*NOTE: when doing kmeans to segment colors, instead of getting only the k colors, add
*       a proportional number of that color with respect to its size (cluster size)
*/

//TODO: add feature where not only can you make the image out of shapes, but other images

//TODO: lines, polygons, circles,etc

#include "cfEngine.h"
#include "PixelArray.h"
#include "Util.h"

int main(const int argc, const char* argv[]) {
    srand(time(0)); 

    cfEngine cf;
    if(!cf.configureEngineSettings(argc, argv)) {
        exit(1);
    }
    cf.init(sf::Color::Blue);
    cf.runAlgo();
    return 0;
}
