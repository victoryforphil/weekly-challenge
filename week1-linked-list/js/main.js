

class LinkedList{
    constructor(){
        this.head = undefined;
        this.tail = undefined;
    }

    pushBack(val){
        const node = {
            value: val,
            next: undefined
        };

        if(this.head == undefined){
            this.head = node;
        }

        if(this.tail != undefined){
            this.tail.next = node;
        }

        this.tail = node;
    }

    pushFront(val){
        const node = {
            value: val,
            next: undefined
        };

        if(this.head != undefined){
            node.next = this.head;
        }

        this.head = node;
    }

    popFront(){
        var elem = this.head;
        this.head = elem.next;
        return elem;
    }

    popFront(){
        var elem = this.head;
        this.head = elem.next;
        return elem;
    }

    popBack(){
        var cur = this.head;
        while(cur.next != this.tail){
            cur = cur.next;
        }
        cur.next = undefined;
        this.tail = cur;
        return this.tail;
    }

    at(index){
        var cur = this.head;
        for(var i=0;i<= index -1;i++){
            if(cur.next != undefined){
                cur = cur.next;
            }
        }
        return cur;
    }

    removeAt(index){
        var cur = this.head;
        var last = cur;

        for(var i=0;i<=index -1;i++){
            if(cur.next != undefined){
                last = cur;
                cur = cur.next
            }
        }

        last.next = cur.next;

        return last;
    }

    reverse(){
        var cur = this.head;
        var prev = undefined;
        var next = undefined;

        while(cur != undefined){
            next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }

        this.head=  prev;
    }
}

var list = new LinkedList();
for(var i=0;i<15;i++){
    list.pushBack(i);
}

console.log("Initial List:");

var node = list.head;
var toPrint = ""
while(node != undefined){
    toPrint += node.value + " ";
    node = node.next;
}  
console.log(toPrint);

console.log("Push Front List:");
toPrint = "";
list.pushFront(999);
node = list.head;
while(node != undefined){
    toPrint += node.value + " ";
    node = node.next;
}
console.log(toPrint);

console.log("Pop Front List:");
toPrint = "";
list.popFront();
node = list.head;
while(node != undefined){
    toPrint += node.value + " ";
    node = node.next;
}
console.log(toPrint);

console.log("Pop Back List:");
toPrint = "";
list.popBack();
node = list.head;
while(node != undefined){
    toPrint += node.value + " ";
    node = node.next;
}
console.log(toPrint);

console.log("Get Index 2 (=2):");
console.log(list.at(2).value);
console.log("Get Index 5 (=5):");
console.log(list.at(5).value);

console.log("Remove At 5:");
toPrint = "";
list.removeAt(5);
node = list.head;
while(node != undefined){
    toPrint += node.value + " ";
    node = node.next;
}
console.log(toPrint);


console.log("Reverse:");
toPrint = "";
list.reverse(5);
node = list.head;
while(node != undefined){
    toPrint += node.value + " ";
    node = node.next;
}
console.log(toPrint);