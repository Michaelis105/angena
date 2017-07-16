//===============================================================
// Name        : personNode.h
// Author      : Michael Louie
// Description : Header for a node containing a person data unit
//================================-==============================
#ifndef PERSONNODE_H
#define PERSONNODE_H

#include <vector>
#include <stdexcept>
#include "person.h"

class PersonNode
{
    private:

        /* Uniquely identify up to 65535 individuals covering
         * enough generations dating back to around the 1600s. */
        unsigned int id;
        Person * p;

    protected:
        PersonNode * mother;
        PersonNode * father;
        PersonNode * partner;
        vector<PersonNode *> offspring;

    public:
        PersonNode(unsigned int newId);
        PersonNode(unsigned int newId, PersonNode * f, PersonNode * m);
        ~PersonNode();
        template <class nameType>
        void setNames(nameType* newName);
        template <class sexType>
        void setSex(sexType* newSex);
        template <class addrType>
        void setBirthAddr(addrType* newBAddr);
        template <class addrType>
        void setDeathAddr(addrType* newDAddr);
        template <class dateType>
        void setBirthDate(dateType* newBDate);
        template <class dateType>
        void setDeathDate(dateType* newDDate);
        template <class livingStateType>
        void setLivingStatus(livingStateType* state);
        template <class noteType>
        void setNotes(noteType* newNote);

        template <class nameType>
        nameType getNames();
        template <class sexType>
        sexType getSex();
        template <class addrType>
        addrType getBirthAddr();
        template <class addrType>
        addrType getDeathAddr();
        template <class dateType>
        dateType getBirthDate();
        template <class dateType>
        dateType getDeathDate();
        template <class livingStateType>
        livingStateType getLivingStatus();
        template <class noteType>
        noteType getNotes();

        void setFather(PersonNode * f);
        void setMother(PersonNode * m);
        PersonNode * getFather();
        PersonNode * getMother();
        void addOffspring(PersonNode * os);
        void removeOffspring(PersonNode * os);
};

/**
 * Sets person's name.
 */
template <class nameType>
void PersonNode::setNames(nameType* newName)
{
    p->setNames(newName);
}

/**
 * Sets person's name.
 */
template <class sexType>
void PersonNode::setSex(sexType* newSex)
{
    p->setSex(newSex);
}

/**
 * Sets person's birth address.
 */
template <class addrType>
void PersonNode::setBirthAddr(addrType* newBAddr)
{
    p->setBirthAddr(newBAddr);
}

/**
 * Sets person's death address.
 */
template <class addrType>
void PersonNode::setDeathAddr(addrType* newDAddr)
{
    p->setDeathAddr(newDAddr);
}

/**
 * Sets person's birth date.
 */
template <class dateType>
void PersonNode::setBirthDate(dateType* newBDate)
{
    p->setBirthDate(newBDate);
}

/**
 * Sets person's death date.
 */
template <class dateType>
void PersonNode::setDeathDate(dateType* newDDate)
{
    p->setDeathDate(newDDate);
}

/**
 * Sets person's living status.
 */
template <class livingStateType>
void PersonNode::setLivingStatus(livingStateType* state)
{
    p->setLivingStatus(state);
}

/**
 * Sets person's notes.
 */
template <class noteType>
void PersonNode::setNotes(noteType * newNote)
{
    p->setNotes(newNote);
}

/**
 * Gets person's name.
 */
template <class nameType>
nameType PersonNode::getNames() {
    return p->getName();
}

/**
 * Gets person's sex.
 */
template <class sexType>
sexType PersonNode::getSex() {
    return p->getSex();
}

/**
 * Gets person's birth address.
 */
template <class addrType>
addrType PersonNode::getBirthAddr() {
    return p->getBirthAddr();
}

/**
 * Gets person's death address.
 */
template <class addrType>
addrType PersonNode::getDeathAddr() {
    return p->getDeathAddr();
}

/**
 * Gets person's birth date.
 */
template <class dateType>
dateType PersonNode::getBirthDate() {
    return p->getBirthDate();
}

/**
 * Gets person's death date.
 */
template <class dateType>
dateType PersonNode::getDeathDate() {
    return p->getDeathDate();
}

/**
 * Gets person's living status.
 */
template <class livingStateType>
livingStateType PersonNode::getLivingStatus() {
    return p->getLivingStatus();
}

/**
 * Gets person's notes.
 */
template <class noteType>
noteType PersonNode::getNotes() {
    return p->getNotes();
}

#endif // PERSONNODE_H
