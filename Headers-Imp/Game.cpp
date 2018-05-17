#include "../Headers/Game.hpp"

Game::Game(): mWindow(sf::VideoMode(800, 800), "SFML Template"), mPlayer() {
	mPlayer.setRadius(100.0f);
	mPlayer.setPosition(300.0f, 300.0f);
	mPlayer.setFillColor(sf::Color(100, 100, 255));
}

Game::~Game() {}

void Game::run() {

	while (mWindow.isOpen()) {

		processEvents();
		update();
		render();
	}
}

void Game::processEvents() {

	sf::Event evt;
	while (mWindow.pollEvent(evt)) {

		if (evt.type == sf::Event::Closed)
			mWindow.close();
	}
}

void Game::update() {}

void Game::render() {
	mWindow.clear();
	mWindow.draw(mPlayer);
	mWindow.display();
}