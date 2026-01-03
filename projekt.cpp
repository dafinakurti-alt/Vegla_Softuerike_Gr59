#include <string>
#include <iostream>
#include <vector>
using namespace std;


enum class Gender {
    Male,
    Female
};


enum class FitnessLevel {
    Beginner,
    Intermediate,
    Advanced
};


enum class GoalType {
    LoseWeight,
    BuildMuscle,
    IncreaseStrength,
    StayFit
};


enum class WorkoutType {
    Cardio,
    Chest,
    Back,
    Legs,
    Shoulders,
    Biceps,
    Triceps,
    FullBody,
    Rest
};


enum class AuthProvider {
    EmailPassword,
    Google
};


struct UserCredentials {
    string email;
    string password;
    AuthProvider provider;
};


struct UserProfile {
    string fullName;
    int age;
    float heightCm;
    float weightKg;
    Gender gender;
};


struct UserSettings {
    FitnessLevel level;
    GoalType goal;
};


struct User {
    int userId;
    UserCredentials credentials;
    UserProfile profile;
    UserSettings settings;
};


struct Exercise {
    string name;
    WorkoutType type;
    int durationMinutes; // per cardio
    int sets;
    int reps;
};


struct DailyWorkout {
    string day;
    vector<Exercise> exercises;
};


struct WeeklyWorkoutPlan {
    FitnessLevel level;
    vector<DailyWorkout> schedule;
};


struct ProgressRecord {
    string date;
    float weightKg;
    float bmi;
};


struct UserProgress {
    int userId;
    vector<ProgressRecord> records;
};




enum class AppScreen {
    Splash,
    Login,
    Signup,
    Home,
    BasicInfo,
    ChooseGoal,
    SelectLevel,
    WorkoutPlan
};




int main() {
    cout << "Fitness App data model initialized.\n";
    return 0;
}
