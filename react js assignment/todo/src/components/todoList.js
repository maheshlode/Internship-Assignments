import React from "react";

function ToDoList(props)
{
    return(
        <li className="todo-listitems"> {props.item}
         <input type="checkbox"  className="checkbox-list" onClick={e=>{props.checkedListItem(props.index)}}/>
        </li>
    )
}

export default ToDoList;