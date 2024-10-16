#include <iostream>
#include <string>
using namespace std;

// function to display each questiond and collect the user's answer
void ask_questions(const string questions[], string answers[],string options[],int size) {
    for (int i = 0; i < size; i++) {
        // display question
        cout << questions[i] << endl; 

        // display mutiple choice options               
        for(int j = 0; j < size; j++){              
            cout << options[j] << endl;
        }

        // record user answers
        cout << "Your answer: ";    
        getline(cin, answers[i]);                   
    }
}

void calculate_score(const string user_answers[], const string correct_answers[], int size) {
    int score = 0;  // initializing score starting at 0

    for (int i = 0; i < size; i++) {
        // determines if the answer is right from the array of answers
        if (user_answers[i] == correct_answers[i]) {    
            score++;    // increment score from each correct answer
        }
    }
    cout << "Your final score: " << score << " out of " << size << endl;
}



int main(){
    // initializing the arrays of the questions, options for the user to pick, and the correct answers
    // each question has the same options to choose from
   string quests[] ={"What's the capital of Maryland", "What's the capital of Georgia", "What's the capital of Alabama", "What's the capital of Texas", "What's the capital of Florida"};
   string opts[] = {"a: Annapolis","b: Montgomery", "c: Atlanta", "d: Austin", "e: Tallahassee"};
   string rAns[] ={"a","c","b","d","e"};

   int size = sizeof(quests) / sizeof(quests[0]);  // calculate size of array

    string stored_questions[size]; // stores a seperate copy of questions for saftey purposes
    string user_answers[size];     // capture user's answer to each question 

    ask_questions(quests, user_answers,opts,size); // call function to ask and record each question/answer

    //print out user's answer 
    cout << "\nYour Answers:" << endl;   
    for (int i = 0; i < size; i++) {
        
        // Display user's answer and the correct answer
        cout << quests[i] << " - you chose: " << user_answers[i]<< "\n";
        if(i == 0){
            cout << "the correct answer is: Annapolis\n"
            << ".................\n";
        }
        if(i == 1){
            cout << "the correct answer is: Atlanta\n"
            << ".................\n";
        }
        if(i == 2){
            cout << "the correct answer is: Montgomery\n"
            << ".................\n";
        }
        if(i == 3){
            cout << "the correct answer is: Austin\n"
            << ".................\n";
        }
        if(i == 4){
            cout << "the correct answer is: Tallahassee\n"
            << ".................\n";
        }
    }

    // calculate score by comparing to the array of answers
    calculate_score(user_answers, rAns, size); \

    return 0;
}

    
    


