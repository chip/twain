//
// Display a random Mark Twain quote
//
// Author: Chip Castle <chip@chipcastle.com>
// Github: http://github.com/chip/twain.git
// August 24, 2012
//
#include <stdio.h>

char * quotes[] = {
  "When angry, count four; when very angry, swear.",
  "I have been studying the traits and dispositions of the \"lower animals\" (so called) and contrasting them with the traits and dispositions of man. I find the result humiliating to me.",
  "What's the use you learning to do right, when it's troublesome to do right and ain't no trouble to do wrong, and the wages is just the same?",
  "All kings is mostly rapscallions.",
  "\"Classic.\" A book which people praise and don't read.",
  "To string incongruities and absurdities together in a wandering and sometimes purposeless way, and seem innocently unaware that they are absurdities, is the basis of the American art, if my position is correct.",
  "The common eye sees only the outside of things, and judges by that, but the seeing eye pierces through and reads the heart and the soul, finding there capacities which the outside didn't indicate or promise, and which the other kind couldn't detect.",
  "In order to make a man or a boy covet a thing, it is only necessary to make the thing difficult to obtain.",
  "Whoever has lived long enough to find out what life is, knows how deep a debt of gratitude we owe to Adam, the first great benefactor of our race. He brought death into the world.",
  "Do not put off till tomorrow what can be put off till day-after-tomorrow just as well.",
  "Everybody talks about the weather, but nobody does anything about it.",
  "Courage is resistance to fear, mastery of fear -- not absence of fear.",
  "Good breeding consists in concealing how much we think of ourselves and how little we think of the other person.",
  "Government is merely a servant, merely a temporary servant; it cannot be its prerogative to determine what is right and what is wrong, and decide who is a patriot and who isn't. Its function is to obey orders, not originate them.",
  "The radical invents the views. When he has worn them out the conservative adopts them.",
  "There are three kinds of lies: lies, damned lies, and statistics.",
  "It were not best that we should all think alike; it is difference of opinion that makes horse races.",
  "Truth is mighty and will prevail. There is nothing the matter with this, except that it ain't so.",
  "The elastic heart of youth cannot be compressed into one constrained shape long at a time.",
  "The humorous story is told gravely; the teller does his best to conceal the fact that he even dimly suspects that there is anything funny about it.",
  "Golf is a good walk spoiled.",
  "The holy passion of friendship is so sweet and steady and loyal and enduring in nature that it will last through a whole lifetime, if not asked to lend money.",
  "Its name is Public Opinion. It is held in reverence. It settles everything. Some think it is the voice of God.",
  "When we remember that we are all mad, the mysteries disappear and life stands explained.",
  "Put all your eggs in one basket -- and watch that basket!",
  "The secret source of humor itself is not joy but sorrow. There is no humor in heaven.",
  "Against the assault of laughter nothing can stand.",
  "The very ink with which all history is written is merely fluid prejudice.",
  "Travel is fatal to prejudice, bigotry, and narrow-mindedness, and many of our people need it sorely on these accounts.",
  "After a few months, acquaintance with European coffee, one's mind weakens, and his faith with it, and he begins to wonder if the rich beverage of home, with its clotted layer of yellow cream on top of it, is not a mere dream after all, and a thing which never existed.",
  "Whenever you find yourself on the side of the majority, it is time to pause and reflect.",
  "Grief can take care of itself; but to get the full value of a joy you must have someone to divide it with.",
  "The lack of money is the root of all evil.",
  "It is better to have old second-hand diamonds than none at all.",
  "Don't part with your illusions. When they are gone, you may still exist, but you have ceased to live.",
  "Clothes make the man. Naked people have little or no influence in society.",
  "There is no distinctly native American criminal class except Congress.",
  "Training is everything. The peach was once a bitter almond; cauliflower is nothing but cabbage with a college education.",
  "Familiarity breeds contempt -- and children.",
  "Many a small thing has been made large by the right kind of advertising.",
  "Words are only painted fire; a look is the fire itself.",
  "It is by the goodness of God that in our country we have those three unspeakably precious things: freedom of speech, freedom of conscience, and the prudence never to practice either.",
  "Denial ain't just a river in Egypt.",
  "Human nature is the same everywhere; it deifies success, it has nothing but scorn for defeat.",
  "Patriotism is merely a religion--love of country, worship of country, devotion to the country's flag and honor and welfare.",
  "Spiritual wants and instincts are as various in the human family as are physical appetites, complexions, and features, and a man is only at his best, morally, when he is equipped with the religious garment whose color and shape and size most nicely accomodate themselves to the spiritual complexion, angularities, and stature of the individual who wears it.",
  "I was afraid of a united Church; it makes a mighty power, the mightiest conceivable, and then when it by and by gets into selfish hands, as it is always bound to do, it means death to human liberty and paralysis to human thought.",
  "The secret of success is making your vocation your vacation.",
  "In the beginning of a change, the patriot is a scarce man, and brave, and hated and scorned. When his cause succeeds, the timid join him, for then it costs nothing to be a patriot."
};

int main() {

  srand(time(NULL));
  int size = sizeof(quotes) / sizeof(quotes[0]);
  int index = rand() % (size - 1);
  printf("%s\n", quotes[index]);

  return 0;
}
