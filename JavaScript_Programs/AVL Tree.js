class AVLNode{
    constructor(data){
        this.data=data;
        this.height=1;
        this.right=null;
        this.left=null;
    }
}

class AVLTree{
    constructor(){
        this.root=null;
    }

    insertValue(data){
        this.root = this.insertNewNode(this.root, data);
    }

    insertNewNode(node,data){
        if(!node){
            return (new AVLNode(data));
        }
        // if given data is smaller than node
        else if(data<node.data){
            node.left=this.insertNewNode(node.left, data);
        }
        // if given data is larger than node
        else if(data>node.data){
            node.right=this.insertNewNode(node.right, data);
        }
        else{
            return node;
        }

        // calculating the height 
        node.height=Math.max(this.calculateHeight(node.left), this.calculateHeight(node.right)) + 1;
        // get the balance factor of the node
        let balance = this.getBalanceFactor(node);

        if(balance>1 && data<node.left.data){
            return (this.rotateRight(node));
        }
        else if(balance<-1 && data>node.right.data){
            return (this.rotateLeft(node));
        }
        else if(balance>1 && data>node.left.data){
            node.left=this.rotateLeft(node.left);
            return (this.rotateRight(node));
        }
        else if(balance<-1 && data<node.right.data){
            node.right = this.rotateRight(node.right);
            return (this.rotateLeft(node));
        }
        return (node);
    }

    calculateHeight(node){
        if(!node){
            return 0;
        }
        else{
            return (node.height);
        }
    }

    getBalanceFactor(node){
        if(!node){
            return 0;
        }
        else{
            return (this.calculateHeight(node.left) - this.calculateHeight(node.right));
        }
    }

    rotateRight(node){
        let newRoot=node.left;
        let grandChild=newRoot.right;
        newRoot.right=node;
        node.left=grandChild;

        node.height=Math.max(this.calculateHeight(node.left), this.calculateHeight(node.right)) + 1;
        newRoot.height=Math.max(this.calculateHeight(newRoot.left), this.calculateHeight(newRoot.right)) + 1;
        return (newRoot);
    }

    rotateLeft(node){
        let newRoot=node.right;
        let grandChild=newRoot.left;
        newRoot.left=node;
        node.right=grandChild;

        node.height=Math.max(this.calculateHeight(node.left), this.calculateHeight(node.right)) + 1;
        newRoot.height=Math.max(this.calculateHeight(newRoot.left), this.calculateHeight(newRoot.right)) + 1;
        return (newRoot);
    }

    getRootNode(){
        return (this.root);
    }

    preOrder(node){
        if(node!==null){
            console.log(node.data);
            this.preOrder(node.left);
            this.preOrder(node.right);
        }
    }

    inOrder(node){
        if(node!==null){
            this.inOrder(node.left);
            console.log(node.data);
            this.inOrder(node.right);
        }
    }

    postOrder(node){
        if(node!==null){
            this.postOrder(node.left);
            this.postOrder(node.right);
            console.log(node.data);
            
        }
    }
}

let node=new AVLTree();

// inserting value
node.insertValue(12);
node.insertValue(20);
node.insertValue(10);
node.insertValue(15);
node.insertValue(8);
node.insertValue(9);

var root = node.getRootNode();

// printing the pre order of the given AVL Tree
console.log("Pre Order Traversal of the Tree : ");
node.preOrder(root);
