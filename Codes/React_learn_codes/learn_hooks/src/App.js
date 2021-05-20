// import logo from './logo.svg';
import React from 'react';
// import React, {useReducer} from 'react';
import './App.css';
// import CustomCounterOne from './components/CustomCounterOne';
// import CustomCounterTwo from './components/CustomCounterTwo';
import UserForm from './components/UserForm';
// import DocTitleOne from './components/DocTitleOne';
// import DocTitleTwo from './components/DocTitleTwo';
// import Counter from './components/Counter';
// import FocusInput from './components/FocusInput';
// import HookTimer from './components/HookTimer';
// import ComponentP from './components/ComponentP';
// import ComponentQ from './components/ComponentQ';
// import ComponentR from './components/ComponentR';
// import DataFetchingOne from './components/DataFetchingOne';
// import DataFetchingTwo from './components/DataFetchingTwo';
// import ParentComponent from './components/ParentComponent';
// import CounterThree from './components/CounterThree';
// import ComponentC from './components/ComponentC';
// import CounterOne from './components/CounterOne';
// import CounterTwo from './components/CounterTwo';
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

export const CountContext = React.createContext()

// const initialState = 0
// const reducer = (state, action) => {
//     switch(action){
//         case 'increment':
//             return state + 1
//         case 'decrement':
//             return state - 1
//         case 'reset':
//             return initialState
//         default:
//             return state
//     }
// }

function App() {

  // const [count, dispatch] = useReducer(reducer, initialState)

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
      {/* <UserContext.Provider value={"Chintu"}>
        <ChannelContext.Provider value={"Cartoon Network"}>
          <ComponentC></ComponentC>
        </ChannelContext.Provider>
      </UserContext.Provider> */}
      {/* <CounterOnte></CounterOnte> */}
      {/* <CounterTwo></CounterTwo> */}
      {/* <CounterThree></CounterThree> */}
      {/* <CountContext.Provider value={{ countState: count, countDispatch: dispatch }}>
        Count - {count}
        <ComponentP></ComponentP>
        <ComponentQ></ComponentQ>
        <ComponentR></ComponentR>
      </CountContext.Provider> */}
      {/* <DataFetchingOne></DataFetchingOne> */}
      {/* <DataFetchingTwo></DataFetchingTwo> */}
      {/* <ParentComponent></ParentComponent> */}
      {/* <Counter></Counter> */}
      {/* <FocusInput></FocusInput> */}
      {/* <HookTimer></HookTimer> */}
      {/* <DocTitleOne></DocTitleOne>
      <DocTitleTwo></DocTitleTwo> */}
      {/* <CustomCounterOne></CustomCounterOne>
      <CustomCounterTwo></CustomCounterTwo> */}
      <UserForm></UserForm>
    </div>
  );
}

export default App;
