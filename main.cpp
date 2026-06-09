#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <limits>
using namespace std;

// Hidden Traits
int compassion = 0;
int courage = 0;
int trust = 0;
int ambition = 0;
int corruption = 0;
int logicTrait = 0;

// Relationships
int elira = 0;
int cassian = 0;
int nyra = 0;
int oren = 0;

// Choice History
string history[30];
int historyCount = 0;

void saveGame(int currentScene)
{
    ofstream file("save.txt");

    file << compassion << endl;
    file << courage << endl;
    file << trust << endl;
    file << ambition << endl;
    file << corruption << endl;
    file << logicTrait << endl;

    file << elira << endl;
    file << cassian << endl;
    file << nyra << endl;
    file << oren << endl;

    file << historyCount << endl;

    for (int i = 0; i < historyCount; i++)
        file << history[i] << endl;

    file << currentScene;

    file.close();
}

void titleScreen()
{
    cout << "=====================================\n";
    cout << "       SELECTO SPECTRUM\n";
    cout << "=====================================\n";
    cout << " Every choice shapes destiny.\n";
    cout << "=====================================\n\n";
}

void showHistory()
{
    cout << "\nCurrent Journey:\n";

    for (int i = 0; i < historyCount; i++)
    {
        cout << "- " << history[i] << endl;
    }
}

int main()
{
    int choice;

    while (true)
    {
        titleScreen();

        cout << "1. New Game\n";
        cout << "2. Exit\n\n";

        cout << "Choose: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nThe journey begins...\n";
            break;
        }
        else if (choice == 2)
        {
            cout << "\nThank you for playing!\n";
            return 0;
        }
        else
        {
            cout << "\nInvalid choice!\n\n";
        }
    }

    // =====================
    // SCENE 1
    // =====================

    cout << "\n=== Scene 1: The Silent Eclipse ===\n\n";

    cout << "The moon vanishes behind an unnatural eclipse.\n";
    cout << "You awaken near the Eclipse Monastery.\n";
    cout << "Brother Oren warns that the Spectrum Heart has begun to stir.\n\n";

    cout << "A. Help Oren calm frightened villagers.\n";
    cout << "B. Investigate the eclipse mark alone.\n";
    cout << "C. Confront Oren and demand the truth.\n\n";

    char sceneChoice;

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;

        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            compassion++;
            trust++;
            oren++;

            history[historyCount++] = "Scene 1: Helped Oren";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            ambition++;

            history[historyCount++] = "Scene 1: Investigated alone";
            break;
        }
        else if (sceneChoice == 'C')
        {
            courage++;
            trust--;
            oren--;

            history[historyCount++] = "Scene 1: Confronted Oren";
            break;
        }
        else
        {
            cout << "\nInvalid choice! Please enter A, B, or C.\n\n";
        }
    }

    cout << "\nScene 1 Complete!\n";

    // =====================
    // SCENE 2
    // =====================

    cout << "\n=== Scene 2: The Memory Collector ===\n\n";

    cout << "Elira Venn offers to restore your fractured memories.\n";
    cout << "She warns that some truths heal while others destroy.\n";
    cout << "You sense that even she is hiding something.\n\n";

    cout << "A. Share your memories openly.\n";
    cout << "B. Reveal only selected memories.\n";
    cout << "C. Hide your darkest memory.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;

        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            trust++;
            compassion++;
            elira += 2;

            history[historyCount++] = "Scene 2: Trusted Elira";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            elira++;

            history[historyCount++] = "Scene 2: Shared selectively";
            break;
        }
        else if (sceneChoice == 'C')
        {
            ambition++;
            corruption++;
            elira--;

            history[historyCount++] = "Scene 2: Hid dark memories";
            break;
        }
        else
        {
            cout << "\nInvalid choice! Please enter A, B, or C.\n\n";
        }
    }

    cout << "\nScene 2 Complete!\n";
    // =====================
    // SCENE 3
    // =====================

    cout << "\n=== Scene 3: The Inquisitor's Offer ===\n\n";

    cout << "Cassian Thorne, once feared as the Royal Inquisitor,\n";
    cout << "claims Vaelis seeks to control the Spectrum Heart.\n";
    cout << "He offers his help, but trust does not come easily.\n\n";

    cout << "A. Accept Cassian's partnership.\n";
    cout << "B. Cooperate cautiously.\n";
    cout << "C. Question and threaten him.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;

        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            trust++;
            cassian += 2;

            history[historyCount++] = "Scene 3: Trusted Cassian";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            cassian++;

            history[historyCount++] = "Scene 3: Worked cautiously with Cassian";
            break;
        }
        else if (sceneChoice == 'C')
        {
            courage++;
            trust--;
            cassian--;

            history[historyCount++] = "Scene 3: Threatened Cassian";
            break;
        }
        else
        {
            cout << "\nInvalid choice! Please enter A, B, or C.\n\n";
        }
    }

    cout << "\nScene 3 Complete!\n";

    // =====================
    // SCENE 4
    // =====================

    cout << "\n=== Scene 4: The Girl Who Knows Everyone ===\n\n";

    cout << "Nyra Vale, a smuggler and information broker,\n";
    cout << "claims to know secrets about Vaelis and the Spectrum.\n";
    cout << "Every favor she offers comes with a hidden price.\n\n";

    cout << "A. Trust Nyra's information network.\n";
    cout << "B. Bargain carefully for information.\n";
    cout << "C. Exploit Nyra's desperation.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;

        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            trust++;
            nyra += 2;

            history[historyCount++] = "Scene 4: Trusted Nyra";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            ambition++;

            nyra++;

            history[historyCount++] = "Scene 4: Bargained with Nyra";
            break;
        }
        else if (sceneChoice == 'C')
        {
            corruption++;
            ambition++;

            nyra--;

            history[historyCount++] = "Scene 4: Exploited Nyra";
            break;
        }
        else
        {
            cout << "\nInvalid choice! Please enter A, B, or C.\n\n";
        }
    }

    cout << "\nScene 4 Complete!\n";
    // =====================
    // SCENE 5
    // =====================

    cout << "\n=== Scene 5: The Price of Safety ===\n\n";

    cout << "The Umbral Guard corners refugees fleeing the darkness.\n";
    cout << "Vaelis offers protection in exchange for obedience.\n";
    cout << "The crowd waits for your decision.\n\n";

    cout << "A. Protect the refugees.\n";
    cout << "B. Negotiate with Vaelis.\n";
    cout << "C. Accept Vaelis's methods.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;
        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            compassion++;
            courage++;
            oren++;

            history[historyCount++] = "Scene 5: Protected refugees";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            trust++;
            cassian++;

            history[historyCount++] = "Scene 5: Negotiated with Vaelis";
            break;
        }
        else if (sceneChoice == 'C')
        {
            ambition++;
            corruption++;
            cassian--;
            oren--;

            history[historyCount++] = "Scene 5: Accepted Vaelis's methods";
            break;
        }

        cout << "\nInvalid choice! Try again.\n\n";
    }

    cout << "\nScene 5 Complete!\n";
    // =====================
    // SCENE 6
    // =====================

    cout << "\n=== Scene 6: The Smuggler's Secret ===\n\n";

    cout << "Nyra reveals she once worked for Vaelis.\n";
    cout << "Her choices led to innocent deaths.\n";
    cout << "She asks if redemption is possible.\n\n";

    cout << "A. Forgive Nyra.\n";
    cout << "B. Demand honesty.\n";
    cout << "C. Reject her completely.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;
        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            compassion++;
            trust++;
            nyra += 2;

            history[historyCount++] = "Scene 6: Forgave Nyra";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            nyra++;

            history[historyCount++] = "Scene 6: Demanded honesty";
            break;
        }
        else if (sceneChoice == 'C')
        {
            courage++;
            corruption++;
            nyra -= 2;

            history[historyCount++] = "Scene 6: Rejected Nyra";
            break;
        }

        cout << "\nInvalid choice! Try again.\n\n";
    }

    cout << "\nScene 6 Complete!\n";
    // =====================
    // SCENE 7
    // =====================

    cout << "\n=== Scene 7: The Mirror Trial ===\n\n";

    cout << "Ancient mirrors reveal alternate versions of yourself.\n";
    cout << "Each reflection embodies regret, fear, and desire.\n";
    cout << "Only you can decide who you become.\n\n";

    cout << "A. Accept your flaws.\n";
    cout << "B. Analyze the visions.\n";
    cout << "C. Embrace the power offered.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;
        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            compassion++;
            trust++;
            elira++;

            history[historyCount++] = "Scene 7: Accepted flaws";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait += 2;
            cassian++;

            history[historyCount++] = "Scene 7: Studied the visions";
            break;
        }
        else if (sceneChoice == 'C')
        {
            ambition++;
            corruption += 2;
            elira--;

            history[historyCount++] = "Scene 7: Embraced the mirrors";
            break;
        }

        cout << "\nInvalid choice! Try again.\n\n";
    }

    cout << "\nScene 7 Complete!\n";
    // =====================
    // SCENE 8
    // =====================

    cout << "\n=== Scene 8: The Hand Extended ===\n\n";

    cout << "Vaelis privately offers an alliance.\n";
    cout << "He claims destiny belongs to those willing to shape it.\n";
    cout << "He extends his hand.\n\n";

    cout << "A. Refuse and uphold your ideals.\n";
    cout << "B. Pretend to agree.\n";
    cout << "C. Accept Vaelis's philosophy.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;
        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            courage++;
            compassion++;
            oren++;
            cassian++;

            history[historyCount++] = "Scene 8: Refused Vaelis";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            ambition++;
            cassian++;
            nyra++;

            history[historyCount++] = "Scene 8: Pretended to agree";
            break;
        }
        else if (sceneChoice == 'C')
        {
            ambition += 2;
            corruption++;
            cassian -= 2;
            oren--;

            history[historyCount++] = "Scene 8: Joined Vaelis";
            break;
        }

        cout << "\nInvalid choice! Try again.\n\n";
    }

    cout << "\nScene 8 Complete!\n";

    // =====================
    // SCENE 9
    // =====================

    cout << "\n=== Scene 9: The Heart of the Spectrum ===\n\n";

    cout << "The Spectrum Heart awakens beneath the monastery.\n";
    cout << "It reveals that every choice has shaped its power.\n";
    cout << "Your companions await your command.\n\n";

    cout << "A. Unite everyone.\n";
    cout << "B. Seek understanding.\n";
    cout << "C. Claim authority.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;
        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            compassion++;
            trust++;

            elira++;
            cassian++;
            nyra++;
            oren++;

            history[historyCount++] = "Scene 9: United everyone";
            break;
        }
        else if (sceneChoice == 'B')
        {
            logicTrait++;
            courage++;

            elira++;
            cassian++;

            history[historyCount++] = "Scene 9: Chose understanding";
            break;
        }
        else if (sceneChoice == 'C')
        {
            ambition += 2;
            corruption++;

            elira--;
            cassian--;
            oren--;

            history[historyCount++] = "Scene 9: Claimed authority";
            break;
        }

        cout << "\nInvalid choice! Try again.\n\n";
    }

    cout << "\nScene 9 Complete!\n";

    // =====================
    // SCENE 10
    // =====================

    cout << "\n=== Scene 10: The Final Selection ===\n\n";

    cout << "\"Who decides what the world becomes?\"\n\n";

    cout << "A. The people we protect.\n";
    cout << "B. Those who bear responsibility.\n";
    cout << "C. Those strong enough to seize destiny.\n\n";

    while (true)
    {
        cout << "Choose (A/B/C): ";
        cin >> sceneChoice;
        sceneChoice = toupper(sceneChoice);

        if (sceneChoice == 'A')
        {
            compassion++;
            trust++;

            history[historyCount++] = "Scene 10: Protected the people";
            break;
        }
        else if (sceneChoice == 'B')
        {
            courage++;
            logicTrait++;

            history[historyCount++] = "Scene 10: Accepted responsibility";
            break;
        }
        else if (sceneChoice == 'C')
        {
            ambition++;
            corruption++;

            history[historyCount++] = "Scene 10: Seized destiny";
            break;
        }

        cout << "\nInvalid choice! Try again.\n\n";
    }

    cout << "\nScene 10 Complete!\n";

    // =====================
    // ENDINGS
    // =====================

    cout << "\n=====================================\n";
    cout << "             ENDING\n";
    cout << "=====================================\n\n";

    int goodRelations = 0;

    if (elira >= 2)
        goodRelations++;
    if (cassian >= 2)
        goodRelations++;
    if (nyra >= 2)
        goodRelations++;
    if (oren >= 2)
        goodRelations++;

    if (logicTrait >= 4 && trust >= 3 && compassion >= 3 &&
        corruption <= 1 &&
        elira >= 2 && cassian >= 2 &&
        nyra >= 2 && oren >= 2)
    {
        cout << "THE TRUTH BEYOND DESTINY\n\n";
        cout << "Destiny was never fixed.\n";
        cout << "The eclipse tested humanity's ability to choose understanding over fear.\n";
    }
    else if (corruption >= 5 &&
             ambition >= 4 &&
             compassion < 4)
    {
        cout << "THE TYRANT\n\n";
        cout << "You rule through fear and obedience.\n";
        cout << "The world survives beneath your shadow.\n";
    }
    else if (courage >= 4 &&
             compassion >= 3 &&
             goodRelations >= 1 &&
             corruption <= 3)
    {
        cout << "THE SACRIFICE\n\n";
        cout << "You give your life to seal the eclipse forever.\n";
        cout << "Legends remember your courage.\n";
    }
    else if (compassion >= 4 &&
             trust >= 3 &&
             corruption <= 2 &&
             goodRelations >= 2)
    {

        cout << "THE HERO\n\n";
        cout << "You become a beacon of hope.\n";
        cout << "People remember your kindness.\n";
    }
    else
    {
        cout << "THE WANDERER\n\n";
        cout << "You reject destiny and seek truths beyond the horizon.\n";
    }

    showHistory();

    cout << "\nRelationships:\n";
    cout << "Elira: " << elira << endl;
    cout << "Cassian: " << cassian << endl;
    cout << "Nyra: " << nyra << endl;
    cout << "Oren: " << oren << endl;

    cout << "\nTraits:\n";
    cout << "Compassion: " << compassion << endl;
    cout << "Courage: " << courage << endl;
    cout << "Trust: " << trust << endl;
    cout << "Ambition: " << ambition << endl;
    cout << "Corruption: " << corruption << endl;
    cout << "Logic: " << logicTrait << endl;

    ofstream file("endings.txt", ios::app);

    /* KEEP ALL YOUR EXISTING FILE CODE HERE */

    file.close();
    cout << "\nThank you for playing Selecto Spectrum: Eclipse!\n";
    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return 0;
}
