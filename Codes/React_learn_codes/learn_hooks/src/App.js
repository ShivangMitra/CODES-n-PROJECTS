// import logo from './logo.svg';
import React from 'react';
import './App.css';
import ComponentC from './components/ComponentC';
// import DataFetching from './components/DataFetching';
// import IntervalHookCounter from './components/IntervalHookCounter';
// import HookCounterOne from './components/HookCounterOne';
// import HookMouse from './components/HookMouse';
// import MouseContainer from './components/MouseContainer';
// import HookCounterThree from './components/HookCounterThree';
// import HookCounterTwo from './components/HookCounterTwo';
// import ClassCounter from './components/ClassCounter';
// import HookCounter from './components/HookCounter';

export const UserContext = React.createContext()
export const ChannelContext = React.createContext()

function App() {
  return (
    <div className="App">
      {/* <ClassCounter></ClassCounter> */}
      {/* <HookCounter></HookCounter> */}
      {/* <HookCounterTwo></HookCounterTwo> */}
      {/* <HookCounterThree></HookCounterThree> */}
      {/* <HookCounterOne></HookCounterOne> */}
      {/* <HookMouse></HookMouse> */}
      {/* <MouseContainer></MouseContainer> */}
      {/* <IntervalHookCounter></IntervalHookCounter> */}
      {/* <DataFetching></DataFetching> */}
      <UserContext.Provider value={"Chintu"}>
        <ChannelContext.Provider value={"Cartoon Network"}>
          <ComponentC></ComponentC>
        </ChannelContext.Provider>
      </UserContext.Provider>
    </div>
  );
}

export default App;
