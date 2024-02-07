#include <iostream>
#include <string>

using namespace std;

class StreamingService {
private:
    string Title;
    string Description;
public:
    //Getters/Setters
    void setTitle(string newTitle) {
        Title = newTitle;
    }
    string getTitle() {
        return Title;
    }
    void setDescription(string newDescription) {
        Description = newDescription;
    }
    string getDescription() {
        return Description;
    }
    //Default constructor
    StreamingService() {}
    //Overloaded constructor
    StreamingService(string Title, string Description) {}

    virtual void PlayFunctionality();

    void detailsFunctionality(StreamingService obj) {
        cout << "Title: " << obj.getTitle() << "\n";
        cout << "Descrpition: " << obj.getDescription() << "\n";
    }
};

class tvShows : StreamingService {
private:
    int seasonEpisodeRunTime[5][5];
    int season;
    int episode;
public:
    // Getters
    int getSeason() {
        return season;
    }
    int getEpisode() {
        return episode;
    }
    int (*getRunTime())[5] {
        return seasonEpisodeRunTime;
    }
    // Setters
    void setRuntime(int runtime[][5]) {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                seasonEpisodeRunTime[i][j] = runtime[i][j];
        return;
    }
    // Functions
    void detailsFunctionality(StreamingService obj) {
        tvShow::detailsFunctionality();
        cout << "Run time of first episode of first season: " << SeasonEpisodeRunTime[0][0] << " minutes." << endl;
    }

    void PlayFunctionality() override {
        int season, episode;
        cout << "Enter season number: ";
        cin >> season;
        cout << "Enter episode number: ";
        cin >> episode;
        cout << "Run time of selected episode: " << SeasonEpisodeRunTime[season - 1][episode - 1] << " minutes" << endl;
    }
    // Default constructor
    tvShows() {}
    // Overloaded constructor
    tvShows(int seasonsEpsideRunTime[5][5]) {}
    tvShows(string Title, string Description, int seasonEpisodeRunTime[5][5]) {}
};