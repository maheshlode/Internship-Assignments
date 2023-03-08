
class Book {
    constructor(bookTitle,bookAuthor) {
        this.bookTitle=bookTitle;
        this.bookAuthor=bookAuthor
        this.head=null;
        this.next = null;
    }

    addBook(bookTitle,bookAuthor){
        let newBook=new Book(bookTitle,bookAuthor);
        if(this.head==null){
            this.head=newBook;
        }
        else{
            let temp=this.head;
            while(temp.next!=null){
                temp=temp.next;
            }
            temp=temp.newBook;
        }
    }

    deleteBook(){
        if(this.bookTitle==null){
            return;
        }
        if(this.bookTitle===this.bookTitle){
            this.head=this.head.next;
        }
        else{
            let temp=temp.head;
            while(temp.next && temp.next.bookTitle!=this.bookTitle){
                temp=temp.next
            }
            if(temp.next){
                temp=temp.next.next
            }
        }
    }

    searchBook(){
        if(this.bookTitle==null){
            return null;
        }
        let temp=temp.head;
        while(temp){
            if(temp.bookTitle===this.bookTitle){
                return this.bookTitle
            }
            temp=temp.next
        }
        return null
    }

    displayBooks(){
        let temp=this.head;
        while(temp!=null){
            console.log(`Book Title: ${temp.bookTitle} | Author: ${temp.bookAuthor}`);
            temp = temp.next;
        }
    }
}

class Student{
    constructor(bookTitle){
        this.bookTitle=bookTitle;
        this.next=null;
    }
}

let book1=new Book()
book1.addBook("C Programming","Dennis Ritchie")
let book2=new Book()
book2.addBook("C Programming","Yashwant Kanetkar")
book1.displayBooks()
book2.displayBooks()