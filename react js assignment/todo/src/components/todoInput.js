import React, { useState } from "react";

function ToDoInput(props)
{
    const [inputText,setInputText]=useState('');
    const handlingEnterKey=(e)=>{
        // 13 is the keyCode of Enter key so after pressing enter key the task will get add to To Do List trying to implement it
        if(e.keyCode===13)
        {
            // props.addTaskToList()
            // setInputText("")
        }
    }
    return(
        <div className="todo-container">
            <input type="text" className="todo-input-container" placeholder="Enter your task" value={inputText} onChange={e=>{setInputText(e.target.value)}}
            onKeyDown={handlingEnterKey}/>
            <button className="add-task-btn" onClick={()=> {props.addTaskToList(inputText)
                setInputText("")}}>Add Task</button>
        </div>
    )
}

export default ToDoInput;