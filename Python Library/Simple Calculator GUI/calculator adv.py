from tkinter import *

root= Tk()
root.title("Calculator")
result=0
f_num=0
Operator=""

def click(number):
    current=e.get()
    e.delete(0, END)
    e.insert(0, str(current)+str(number))

def clear():
    e.delete(0, END)

def first_num():
    first_num=e.get()
    global f_num
    f_num=int(first_num)
    e.delete(0, END)

def operation(sign):
    first_num()
    global operator
    operator=sign    
    
def equal():
    second_num=e.get()
    e.delete(0, END)
    global result 
    
    if operator=="+":
        result=f_num+int(second_num)
    elif operator=="-":
        result=f_num-int(second_num)
    elif operator=="X":
        result=f_num*int(second_num)
    elif operator=="%":
        result=int(f_num/int(second_num))
    
    e.insert(0, result)

e=Entry(root, width=40, borderwidth=3)
e.grid(row=0, column=0, columnspan=3, padx=10, pady=10)



b_1=Button(root, text="1", padx=40, pady=20, command=lambda : click(1))
b_2=Button(root, text="2", padx=40, pady=20, command=lambda : click(2))
b_3=Button(root, text="3", padx=40, pady=20, command=lambda : click(3))

b_4=Button(root, text="4", padx=40, pady=20, command=lambda : click(4))
b_5=Button(root, text="5", padx=40, pady=20, command=lambda : click(5))
b_6=Button(root, text="6", padx=40, pady=20, command=lambda : click(6))

b_7=Button(root, text="7", padx=40, pady=20, command=lambda : click(7))
b_8=Button(root, text="8", padx=40, pady=20, command=lambda : click(8))
b_9=Button(root, text="9", padx=40, pady=20, command=lambda : click(9))

b_0=Button(root, text="0", padx=40, pady=20, command=lambda : click(0))
b_add=Button(root, text="+", padx=40, pady=20, command=lambda:operation('+'))
b_subtract=Button(root, text="-", padx=40, pady=20, command=lambda:operation('-'))

b_multiply=Button(root, text="X", padx=40, pady=20, command=lambda:operation('X'))
b_divide=Button(root, text="%", padx=40, pady=20, command=lambda:operation('%'))
b_equal=Button(root, text="=", padx=40, pady=20, command=equal)

b_clear=Button(root, text="clear", padx=120, pady=20, command=clear)

b_1.grid(row=3, column=0)
b_2.grid(row=3, column=1)
b_3.grid(row=3, column=2)

b_4.grid(row=2, column=0)
b_5.grid(row=2, column=1)
b_6.grid(row=2, column=2)

b_7.grid(row=1, column=0)
b_8.grid(row=1, column=1)
b_9.grid(row=1, column=2)

b_0.grid(row=4, column=0)
b_add.grid(row=4, column=1)
b_subtract.grid(row=4, column=2)

b_multiply.grid(row=5, column=0)
b_divide.grid(row=5, column=1)
b_equal.grid(row=5, column=2)

b_clear.grid(row=6, column=0, columnspan=3)

mainloop()