#include "organizmy.h"
#include "organizm.h"

void organizmy::createNode(organizm* node) {
	if (front == nullptr) {
		front = node;
		back = node;
	}
	else {
		organizm* buffer = front;
		while (buffer->getPrev() != nullptr && buffer->getPrev()->getInicjatywa() >= node->getInicjatywa()) {
			buffer = buffer->getPrev();
		}
		if (buffer->getPrev() == nullptr) {
			back->setPrev(node);
			node->setNext(back);
			back = node;
		}
		else {
			node->setNext(buffer);
			node->setPrev(buffer->getPrev());
			buffer->setPrev(node);
			node->getPrev()->setNext(node);
		}
		buffer = nullptr;
	}
}

void organizmy::deleteNode(organizm* node) {
	if (front == node && back == node) {
		front = nullptr;
		back = nullptr;
		delete node;
	}
	else if (front == node) {
		node->getPrev()->setNext(nullptr);
		front = node->getPrev();
		node->setPrev(nullptr);
		delete node;
	}
	else if (back == node) {
		node->getNext()->setPrev(nullptr);
		back = node->getNext();
		node->setNext(nullptr);
		delete node;
	}
	else {
		node->getNext()->setPrev(node->getPrev());
		node->getPrev()->setNext(node->getNext());
		node->setNext(nullptr);
		node->setPrev(nullptr);
		delete node;
	}
}

organizm* organizmy::getFront() {
	return front;
}

organizm* organizmy::getBack() {
	return back;
}