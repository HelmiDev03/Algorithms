#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Base data tailored to your interests (Signal Processing, NestJS, C++, ML)
const vector<string> TECH_STACKS = {
    "NestJS", "C++", "Python", "React", "Angular", "Vue.js", "Node.js", "Django", "Spring Boot", "TensorFlow", "PyTorch"
};

const vector<string> CONCEPTS = {
    "Wiener Filter Design", "Signal Modulation", "Kalman Filtering", "Fourier Transform", 
    "Spectral Density", "Middleware Architecture", "Dependency Injection", "Microservices",
    "REST API Design", "GraphQL Schema", "Memory Management", "Pointer Arithmetic",
    "Template Metaprogramming", "Cross-Validation", "Gradient Descent", "Neural Networks"
};

const vector<string> ROLES = {
    "Developer", "Engineer", "Architect", "Consultant", "Specialist", "Researcher", "Analyst"
};

const vector<string> LEVELS = {
    "Junior", "Associate", "Senior", "Principal", "Lead", "Expert", "Certified"
};

const vector<string> INDUSTRIES = {
    "FinTech", "Healthcare", "Telecommunications", "Automotive", "E-commerce", "Cybersecurity", "IoT"
};

int main() {
    ofstream file("skills_dataset_10k.csv");
    
    if (!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Write Header
    file << "Skill_Name,Proficiency_Level,Industry_Context,Category" << endl;

    srand(time(0));
    int count = 0;
    
    cout << "Generating 10,000 skills..." << endl;

    while (count < 10000) {
        // Randomly select components
        string tech = TECH_STACKS[rand() % TECH_STACKS.size()];
        string concept = CONCEPTS[rand() % CONCEPTS.size()];
        string role = ROLES[rand() % ROLES.size()];
        string level = LEVELS[rand() % LEVELS.size()];
        string industry = INDUSTRIES[rand() % INDUSTRIES.size()];
        
        // Randomly choose a format to ensure variety
        int format = rand() % 3;
        string skill_name;
        string category;

        if (format == 0) {
            skill_name = level + " " + tech + " " + role;
            category = "Job Role";
        } else if (format == 1) {
            skill_name = tech + " for " + industry;
            category = "Industry Application";
        } else {
            skill_name = concept + " in " + tech;
            category = "Technical Concept";
        }

        // Write to CSV
         
           file << skill_name << "," 
             << level << "," 
             << industry << "," 
             << category << endl;

        count++;
    }

    file.close();
    cout << "Success! 'skills_dataset_10k.csv' has been created." << endl;
    
    return 0;
}