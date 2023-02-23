import logo from './logo.svg';
import './App.css';
import ToDoInput from './components/todoInput';
import ToDoList from './components/todoList';
import { useState } from 'react';

function App() {
  const [listToDo,setListToDo]=useState([]);
  let addTaskToList=(inputText)=>{
    if(inputText!=='')
    {
      setListToDo([...listToDo,inputText]);
    }
  }
  const checkedListItem=(key)=>{
    let newListToDo=[...listToDo]
    // passing a key and the number of elements to delete
    newListToDo.splice(key,1)
    // updating the list after deleting a task
    setListToDo([...newListToDo])
  }
  return (
    <div className="todo-container">
      <img src={logo} className="App-logo" alt="logo" />
      <ToDoInput addTaskToList={addTaskToList}/>
      <h2>Task To Do</h2>
      <hr/>
      {/*here the tasks are showing in list format
       such that the entered task will get added to 
       list and it will shown accordingly*/}
      {listToDo.map((lisItem,i)=>{
        return(
          <ToDoList key={i} item={lisItem} index={i} checkedListItem={checkedListItem}/>
        )
      })}
    </div>
  );
}

export default App;
