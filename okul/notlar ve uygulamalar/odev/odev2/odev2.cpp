#include <iostream>
#include <fstream>
#include <string>

class Election {
private:
    std::string candidatesName[100]; // Aday isimleri
    int votesByRegion[100][4];    // Her adayın 4 bölgeden aldığı oylar
    int totalVotes[100];      // Her adayın toplam oyları
    int candidateCount;     // Aday sayısı

public:
    Election() : candidateCount(0) { // Constructor
        for (int i = 0; i < 100; i++) {
            totalVotes[i] = 0;
            for (int j = 0; j < 4; j++) {
                votesByRegion[i][j] = 0;
            }
        }
    }

    void readCandidates(const std::string& filename);
    void readVotes(const std::string& filename);
    void displayResults();
    void sortCandidates();
};

void Election::readCandidates(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Aday dosyasi acilamadi." << filename << std::endl;
        return;
    }

    while (inFile >> candidatesName[candidateCount]) {
        candidateCount++;
    }
    inFile.close();
}

void Election::readVotes(const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Oylama dosyasi acilamadi." << std::endl;
        return;
    }

    std::string candidateName;
    int regionNumber, voteCount;

    while (inFile >> candidateName >> regionNumber >> voteCount) {
        for (int i = 0; i < candidateCount; i++) {
            if (candidatesName[i] == candidateName) {
                votesByRegion[i][regionNumber - 1] += voteCount; // Oy sayısını güncelle
                break;
            }
        }
    }
    inFile.close();
}

void Election::sortCandidates() {
    for (int i = 0; i < candidateCount - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < candidateCount; j++) {
            if (candidatesName[j] < candidatesName[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::string tempName = candidatesName[i];
            candidatesName[i] = candidatesName[minIndex];
            candidatesName[minIndex] = tempName;

            for (int k = 0; k < 4; k++) {
                int tempVote = votesByRegion[i][k];
                votesByRegion[i][k] = votesByRegion[minIndex][k];
                votesByRegion[minIndex][k] = tempVote;
            }
        }
    }
}

void Election::displayResults() {
    std::cout << "-------------- Election Results --------------" << std::endl;
    std::cout << "Candidate      Votes" << std::endl;
    std::cout << "Name           Region1 Region2 Region3 Region4 Total" << std::endl;
    std::cout << "---------      ------- ------- ------- ------- ------" << std::endl;

    int totalPollVotes = 0;
    std::string winnerName;
    int maxVotes = 0;

    for (int i = 0; i < candidateCount; i++) {
        int total = 0;
        std::cout << candidatesName[i];

        for (int j = 0; j < 4; j++) {
            std::cout << " " << votesByRegion[i][j];
            total += votesByRegion[i][j];
        }

        totalVotes[i] = total;
        totalPollVotes += total;

        std::cout << " " << total << std::endl;

        if (total > maxVotes) {
            maxVotes = total;
            winnerName = candidatesName[i];
        }
    }

    std::cout << "Winner: " << winnerName << ", Votes Received: " << maxVotes << std::endl;
    std::cout << "Total votes polled: " << totalPollVotes << std::endl;
}

int main() {
    Election election;
    election.readCandidates("txt/canDat.txt");
    election.readVotes("txt/voteData.txt");
    election.sortCandidates();
    election.displayResults();

    return 0;
}
