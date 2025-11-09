#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string choice;
    bool keepSummoning = true;
    int summonCount = 0;

    string servants[] = {
        "Melusine (Lancer, Featured SSR)", "Artoria Pendragon (Saber, SSR)", "Altera (Saber, SSR)",
        "Vlad III (Berserker, SSR)", "Jeanne d'Arc (Ruler, SSR)", "Orion (Archer, SSR)",
        "Nikola Tesla (Archer, SSR)", "Arjuna (Archer, SSR)", "Karna (Lancer, SSR)",
        "Enkidu (Lancer, SSR)", "Tamamo-no-Mae (Caster, SSR)", "Anastasia & Viy (Caster, SSR)",
        "Illyasviel von Einzbern (Caster, SSR)", "Scheherazade (Caster, SSR)", "Xuanzang Sanzang (Caster, SSR)",
        "Quetzalcoatl (Rider, SSR)", "Ozymandias (Rider, SSR)", "Achilles (Rider, SSR)",
        "Mordred (Saber, SSR)", "Artoria Pendragon Alter (Saber, SR)", "Napoleon (Archer, SSR)",
        "Europa (Rider, SSR)", "Osakabehime (Assassin, SSR)", "Semiramis (Assassin, SSR)",
        "Mysterious Heroine X (Assassin, SSR)", "Nightingale (Berserker, SSR)", "Jeanne d’Arc Alter (Berserker, SSR)",
        "Ruler Martha (Ruler, SSR)", "Sherlock Holmes (Ruler, SSR)", "Qin Shi Huang (Ruler, SSR)",
        "Ganesha (Moon Cancer, SSR)", "Okita Souji (Alter Ego, SSR)", "Passionlip (Alter Ego, SSR)"
    };

    string craftEssences[] = {
        "Kaleidoscope (SSR)", "Imaginary Around (SR)", "Formal Craft (SR)",
        "Victor of the Moon (SSR)", "Limited/Zero Over (SR)", "Prisma Cosmos (SSR)",
        "The Black Grail (SSR)", "Divine Banquet (SR)", "Projection (R)", "Dragon's Meridian (R)"
    };

    srand(time(0));

    cout << "\n== SAINT QUARTZ SUMMON ==";
    cout << "\n30 Saint Quartz will be used to summon 11 time(s).";
    cout << "\nFree Saint Quartz will be prioritized.";
    cout << "\nFeatured SSR: Melusine (Lancer)!";
    cout << "\nFeatured Craft Essence: Kaleidoscope"; 
    cout << "\n\nSummon Now? (Yes/No): ";
    cin >> choice;


    while (keepSummoning) {
        if (choice == "No" || choice == "no" || choice == "N" || choice == "n") {
            cout << "\nReturning to Home Screen...";
            keepSummoning = false;
        } else if (choice == "Yes" || choice == "yes" || choice == "Y" || choice == "y") {
            ++summonCount;
            cout << "\nSummoning 11 cards (Round " << summonCount << ")...\n";

            for (int i = 1; i <= 11; i++) {
                int poolType = rand() % 2;

                if (poolType == 0) {
                    int index = rand() % (sizeof(servants) / sizeof(servants[0]));
                    cout << "Summon " << i << ": You got " << servants[index] << "\n";
                } else {
                    int index = rand() % (sizeof(craftEssences) / sizeof(craftEssences[0]));
                    cout << "Summon " << i << ": You got Craft Essence: " << craftEssences[index] << "\n";
                }
            }

            cout << "\nSummon again? (Yes/No): ";
            cin >> choice;

            if (choice == "No" || choice == "no" || choice == "N" || choice == "n") {
                cout << "\nReturning to Home Screen... ";
                keepSummoning = false;
                return 1; 
            }
        } else {
            cout << "\nInvalid input. Please type Yes or No.";
            return 1; 
        }
    }

    return 0;
}

