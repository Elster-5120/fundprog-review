#include<iostream>
#include<string>
using namespace std;

int main () 
{
	cout << "\n=== DANGANRONPA V3: KILLING HARMONY ===";
	cout << "\nStart Game? Yes or No?"; 
	cout << "\nPlease enter Yes and No in lowercase please!"; 
	cout << "\nBEWARE OF SPOILERS IF YOU PICKED YES!";
	
	string choice; 
	cin >> choice; 
	
	if(choice == "no") {
		cout << "\nAre you sure? Your progress might not be saved.";
		cout << "\nPress the Enter key to quit."; 
	}
	else if(choice == "yes") {
		cout << "\nSelect a character to know their talent and cause of death/survival."; 
		cout << "\nBEWARE OF SPOILERS!!"; 
		
		cout << "\n1. Kaede Akamatsu"; 
		cout << "\n2. Shuichi Saihara";
		cout << "\n3. Tsumugi Shirogane";
		cout << "\n4. Rantaro Amami"; 
		cout << "\n5. Himiko Yumeno";
		cout << "\n6. Kirumi Tojo";
		cout << "\n7. Tenko Chabashira"; 
		cout << "\n8. Kokichi Ouma"; 
		cout << "\n9. Korekiyo Shinguji"; 
		cout << "\n10. Gonta Gokuhara"; 
		cout << "\n11. Angie Yonaga"; 
		cout << "\n12. Kaito Momota";
		cout << "\n13. Ryoma Hoshi"; 
		cout << "\n14. K1-BO"; 
		cout << "\n15. Maki Harukawa";
		cout << "\n16. Miu Iruma"; 
		cout << "\n17. Cancel"; 
		
		cout << "\n\nEnter your selection (1-16): "; 
		int value;
		cin >> value;
		
		switch(value) {
			case 1: {
				cout << "\nYou selected Kaede Akamatsu.";
				cout << "\nTalent: Ultimate Pianist"; 
				cout << "\nCAUSE OF DEATH: She was wrongfully executed for Rantaro's murder after Monokuma framed her for the crime.";
				break;
			}
			case 2: {
				cout << "\nYou selected Shuichi Saihara.";
				cout << "\nTalent: Ultimate Detective"; 
				cout << "\nCAUSE OF SURVIVAL: He survived the final killing game after confronting the mastermind and choosing to end the reality TV show.";
				break;
			}
			case 3: {
				cout << "\nYou picked Tsumugi Shirogane.";
				cout << "\nTalent: Ultimate Cosplayer"; 
				cout << "\nCAUSE OF DEATH: She was revealed as the mastermind and executed alongside the remnants of the Monokubs by a massive hydraulic press during the final trial.";
				break;
			}
			case 4: {
				cout << "\nYou picked Rantaro Amami."; 
				cout << "\nTalent: Ultimate ???"; 
				cout << "\nCAUSE OF DEATH: He was killed by Tsumugi Shirogane (the mastermind) who struck him on the head with a shot put ball in the library."; 
				break;
			}
			case 5: {
				cout << "\nYou picked Himiko Yumeno."; 
				cout << "\nTalent: Ultimate Magician"; 
				cout << "\nCAUSE OF SURVIVAL: She survived the final killing game alongside Shuichi and Maki."; 
				break;
			}
			case 6: {
				cout << "\nYou picked Kirumi Tojo."; 
				cout << "\nTalent: Ultimate Maid"; 
				cout << "\nCAUSE OF DEATH: Dragged up a spiked rope and fell to her death."; 			
				break;
			}
			case 7: {
				cout << "\nYou picked Tenko Chabashira."; 
				cout << "\nTalent: Ultimate Lesbia- Aikido Master"; 
				cout << "\nCAUSE OF DEATH: She was murdered by Korekiyo Shinguji during the Séance, where he used a seesaw to drop an iron cage, severing her neck."; 
				break;
			}
			case 8: {
				cout << "\nYou picked Kokichi Ouma. "; 
				cout << "\nTalent: Ultimate Supreme Leader"; 
				cout << "\nCAUSE OF DEATH: He intentionally poisoned himself and was crushed by a hydraulic press as part of a plan with Kaito to create an unsolvable murder.";
				break;
			}
			case 9: {
				cout << "\nYou picked Korekiyo Shinguji. "; 
				cout << "\nTalent: Ultimate Anthropologist"; 
				cout << "\nCAUSE OF DEATH: Boiled in saltwater before his spirit was banished by Monokuma's sister.";
				break;
			}
			case 10: {
				cout << "\nYou picked Gonta Gokunara."; 
				cout << "\nTalent: Ultimate Entomologist"; 
				cout << "\nCAUSE OF DEATH: Stung and spun by giant insects before being crushed by a robot."; 
				break;
			}
			case 11: {
				cout << "\nYou picked Angie Yonaga."; 
				cout << "\nTalent: Ultimate Artist";
				cout << "\nCAUSE OF DEATH: She was murdered by Korekiyo Shinguji, who hit her head with a saw while preparing for his next ritual."; 
				break;
			}
			case 12: {
				cout << "\nYou picked Kaito Momota.";
				cout << "\nTalent: Ultimate Astronaut";
				cout<< "\nCAUSE OF DEATH: Died from a lethal injection with Kokichi's body."; 
				break;
			}
			case 13: {
				cout << "\nYou picked Ryoma Hoshi.";
				cout << "\nTalent: Ultimate Tennis Pro"; 
				cout << "\nCAUSE OF DEATH: He was murdered by Kirumi Tojo, who drowned him in the library's aquarium.";
				break;
			}
			case 14: {
				cout << "\nYou picked K1-BO."; 
				cout << "\nTalent: Ultimate Clanker"; 
				cout << "\nCAUSE OF DEATH: Sacrifice"; 
				break;
			}
			case 15: {
				cout << "\nYou picked Maki Harukawa."; 
				cout << "\nTalent: Ultimate Assassin"; 
				cout << "\nCAUSE OF SURVIVAL: She survived the final killing game alongside Shuichi and Himiko."; 
				break;
			}
			case 16: {
				cout << "\nYou picked Miu Iruma"; 
				cout << "\nTalent: Ultimate Inventor.";
				cout << "\nCAUSE OF DEATH: Strangled by Gonta Gokuhara in the virtual world."; 
				break;
			}
			case 17: {
				cout << "\nPlease press the 'Enter' key to quit!"; 
				break;
			}
			default: {
				cout << "\nInvalid selection. Please enter a number between 1 and 16."; 
				break;
			}
		}
	}
	else {
		cout << "\nInvalid initial choice. Please enter 'yes' or 'no'!"; 
	}
	return 0; 
}
