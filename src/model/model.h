//==========================================
// Name        : model.h
// Author      : Michael Louie
// Description : Header for the Angena model
//==========================================
#ifndef MODEL_H
#define MODEL_H
#include <QUuid>
#include <vector>
#include <stdexcept>
#include "familyTree.h"
#include "fileIO.h"
#include "interpreter.h"

class TempStore {
    public:
        vector<string> names;
        string sex;
        vector<int> birthDate;
        vector<string> birthAddr;
        string notes;
        vector<int> deathDate;
        vector<string> deathAddr;
        bool living;
};

class Model
{
    private:
        PersonNode * curSelPerson;
        FamilyTree * curft;
        FileIO fio;
        Interpreter intp;
        //personNode * clipboard;
        bool hasChanged;
        vector<string> serializeName(PersonName* name);
        vector<int> serializeDate(Date* date);
        vector<string> serializeAddress(PersonAddress* addr);

    public:
        TempStore ts;
        Model();
        bool isChanged();
        void initializeNewFamilyTree();
        void addPerson();
        void delPerson();
        void editPerson(vector<string> names, string sex,
                        vector<string> birthDate, vector<string> birthAddr,
                        string notes, vector<string> deathDate,
                        vector<string> deathAddr, bool living);
        void connectPerson();
        void disconnectPerson();
        void undo();
        void redo();
        void clearTreeState();
        void openTreeState(string filename);
        void saveTreeState();
        void saveTreeState(string filename);
        bool hasFilename();
        bool isTreeOpen();
        PersonNode* getCurSelPerson();
        void cleanUp();
        void updatePersonTempStore();

};

#endif // MODEL_H
