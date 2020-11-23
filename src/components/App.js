import React, { Component, useState } from "react";
import "../styles/App.css";
import Home from "./Home";
import About from "./About";
import { Route, Switch } from "react-router-dom";

class App extends Component {
  render() {
    return (
      <div id="main">
        <Switch>
          <Route path="/" component={Home} />
          <Route path="/about" component={About} />
        </Switch>
      </div>
    );
  }
}

export default App;
