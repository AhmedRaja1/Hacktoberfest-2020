from tkinter import*
import tkinter.messagebox
import time
import random

operator = ""
#### creating window and its geometry ######

root = Tk()
root.geometry("1600x800+0+0")
root.title("Bill Calculator")


#### creating Frame ######

top = Frame(root, width = 1600, height = 50, relief = SUNKEN)
top.pack(side = TOP)

left = Frame(root, width = 800, height = 700, relief = SUNKEN)
left.pack(side = LEFT)

right = Frame(root, width = 300, height = 700, relief = SUNKEN)
right.pack(side = RIGHT)


##### creating label of title and time ###

label_info = Label(top, font = ('arial',50,'bold'), text ="DCSE DHABA", fg = "steel blue", bd = 10, anchor = 'w')
label_info.grid(row = 0, column = 0)

local_time = time.asctime(time.localtime(time.time()))

label_info = Label(top, font = ('arial',20,'bold'), text = local_time, fg = "steel blue", bd = 10, anchor = 'w')
label_info.grid(row = 1, column = 0)


######## creating calculator #######

txt_inp = StringVar()

def btn_click(number):
	global operator
	operator = operator+ str(number)
	txt_inp.set(operator)

def fun_clear():
	global operator
	operator = ""
	txt_inp.set(operator)

def calculate():
	global operator
	try:
		sumup = str(eval(operator))
	except Exception as e:
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		sumup = 0
		fun_clear()
	txt_inp.set(sumup)
	operator = ""




txt = Entry(right, font = ('arial',20,'bold'), textvariable = txt_inp, bd = 30, insertwidth = 4, bg = "powderblue", justify = 'right')
txt.grid(columnspan = 4)


#=========first row button=========

btn7 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="7", bg="powder blue", command=lambda: btn_click(7))
btn7.grid(row= 2, column= 0)

btn8 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="8", bg="powder blue", command=lambda: btn_click(8))
btn8.grid(row= 2, column= 1)

btn9 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="9", bg="powder blue", command=lambda: btn_click(9))
btn9.grid(row= 2, column= 2)

plus = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="+", bg="powder blue", command=lambda: btn_click("+"))
plus.grid(row= 2, column= 3)


#=========second row button=========

btn4 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="4", bg="powder blue", command=lambda: btn_click(4))
btn4.grid(row= 3, column= 0)

btn5 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="5", bg="powder blue", command=lambda: btn_click(5))
btn5.grid(row= 3, column= 1)

btn6 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="6", bg="powder blue", command=lambda: btn_click(6))
btn6.grid(row= 3, column= 2)

minus = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="-", bg="powder blue", command=lambda: btn_click("-"))
minus.grid(row= 3, column= 3)


#=========third row button=========


btn1 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="1", bg="powder blue", command=lambda: btn_click(1))
btn1.grid(row= 4, column= 0)

btn2 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="2", bg="powder blue", command=lambda: btn_click(2))
btn2.grid(row= 4, column= 1)

btn3 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="3", bg="powder blue", command=lambda: btn_click(3))
btn3.grid(row= 4, column= 2)

multiply = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="*", bg="powder blue", command=lambda: btn_click("*"))
multiply.grid(row= 4, column= 3)


#=========fourth row button=========

btn0 = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="0", bg="powder blue", command=lambda: btn_click(0))
btn0.grid(row= 5, column= 0)

btn_clear = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="C", bg="powder blue",command=fun_clear)
btn_clear.grid(row= 5, column= 1)

btn_equal = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="=", bg="powder blue",command= calculate)
btn_equal.grid(row= 5, column= 2)

division = Button(right, padx= 16, pady=16, bd= 8, fg= "black", font= ('arial',20,'bold'), text="/", bg="powder blue", command=lambda: btn_click("/"))
division.grid(row= 5, column= 3) 


###########now on left frame  enter menu ####################################################################

rand = StringVar()
fries_inp = StringVar()
Sandwich_inp = StringVar()
burger_inp = StringVar()
drinks_inp = StringVar()
total_inp = StringVar()
subtotal_inp = StringVar()
services_inp = StringVar()
tax_inp = StringVar()
cost_inp = StringVar()
Pasta_inp = StringVar() 
Tacos_inp = StringVar()

def ref():
	
	f1 = open('value.txt','r')
	line = f1.readlines()
	fries_p = float(line[0])
	Sandwich_p = float(line[1])
	burger_p = float(line[2])
	drinks_p = float(line[3])
	Pasta_p = float(line[4])
	Tacos_p = float(line[5])
	f1.close()

	x = random.randint(23133,33344)
	random_ref = str(x)
	rand.set(random_ref)
	try:
		if fries_inp.get() == "":
			CoF = 0
		else:
			CoF = float(fries_inp.get())*fries_p
	except Exception as e:
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		fries_inp.set("")
		
	try:	
		if Sandwich_inp.get() == "":
			CoS = 0
		else:
			CoS = float(Sandwich_inp.get())*Sandwich_p
	except Exception as e:
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		Sandwich_inp.set("")
	
	try:
		if burger_inp.get() == "":
			CoB = 0
		else:
			CoB = float(burger_inp.get())*burger_p
	except Exception as e:
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		burger_inp.set("")

	try:
		if drinks_inp.get() == "":
			CoD = 0
		else:
			CoD = float(drinks_inp.get())*drinks_p
	except Exception as e:
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		drinks_inp.set("")

	try:
		if Pasta_inp.get() == "":
			CoP = 0
		else:
			CoP = float(Pasta_inp.get())*Pasta_p
	except Exception as e:
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		Pasta_inp.set("")

	try:
		if Tacos_inp.get() == "":
			CoC = 0
		else:
			CoC = float(Tacos_inp.get())*Tacos_p
	except Exception as e:	
		tkinter.messagebox.showinfo('Error','Incorrect Input')
		Tacos_inp.set("")

	CostOfMeal = (CoF+CoS+CoB+CoD+CoP+CoC)
	
	PayTax = (CostOfMeal)*0.18
	ServiceCharge = (CostOfMeal)*0.05 	
	totalTax = PayTax + ServiceCharge
	totalCost = (CostOfMeal + PayTax + ServiceCharge)

	services_inp.set(str('%.2f' % (ServiceCharge)))
	tax_inp.set(str('%.2f' % (PayTax)))
	subtotal_inp.set(str('%.2f' % (CostOfMeal)))
	total_inp.set(str('%.2f' % (totalCost)))
	cost_inp.set(str('%.2f' % (totalTax)))
	 		


def bck():
	root.destroy()
	import question



def qexit():
	root.destroy()

def reset():
	rand.set("")
	fries_inp.set("")
	Sandwich_inp.set("")
	burger_inp.set("")
	drinks_inp.set("")
	total_inp.set("")
	subtotal_inp.set("")
	services_inp.set("")
	tax_inp.set("")
	cost_inp.set("")
	Pasta_inp.set("")
	Tacos_inp.set("")
	 



customer_number = Label(left, font=('arial',16,'bold'),text = "Reference Id", bd = 16, anchor = 'w')
customer_number.grid(row=0,column=0,sticky = E)
txt_customer = Entry(left,font=('arial',16,'bold'), textvariable=rand, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_customer.grid(row=0,column=1)

fries = Label(left, font=('arial',16,'bold'),text = "Fries", bd = 16, anchor = 'w' )
fries.grid(row=1,column=0,sticky = E)
txt_fries = Entry(left,font=('arial',16,'bold'), textvariable=fries_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_fries.grid(row=1,column=1)

Sandwich = Label(left, font=('arial',16,'bold'),text = "Sandwich", bd = 16, anchor = 'w' )
Sandwich.grid(row=2,column=0,sticky = E)
txt_Sandwich = Entry(left,font=('arial',16,'bold'), textvariable=Sandwich_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_Sandwich.grid(row=2,column=1)


burger = Label(left, font=('arial',16,'bold'),text = "Burger", bd = 16, anchor = 'w' )
burger.grid(row=3,column=0,sticky = E)
txt_burger = Entry(left,font=('arial',16,'bold'), textvariable=burger_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_burger.grid(row=3,column=1)

drinks = Label(left, font=('arial',16,'bold'),text = "Drinks", bd = 16, anchor = 'w' )
drinks.grid(row=4,column=0,sticky = E)
txt_drinks = Entry(left,font=('arial',16,'bold'), textvariable=drinks_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_drinks.grid(row=4,column=1)

Pasta = Label(left, font=('arial',16,'bold'),text = "Pasta", bd = 16, anchor = 'w' )
Pasta.grid(row=5,column=0,sticky = E)
txt_Pasta = Entry(left,font=('arial',16,'bold'), textvariable=Pasta_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_Pasta.grid(row=5,column=1)

Tacos = Label(left, font=('arial',16,'bold'),text = "Tacos", bd = 16, anchor = 'w' )
Tacos.grid(row=0,column=2,sticky = E)
txt_Tacos = Entry(left,font=('arial',16,'bold'), textvariable=Tacos_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_Tacos.grid(row=0,column=3)

subtotal = Label(left, font=('arial',16,'bold'),text = "Cost of Meal", bd = 16, anchor = 'w' )
subtotal.grid(row=1,column=2,sticky = E)
txt_subtotal = Entry(left,font=('arial',16,'bold'), textvariable=subtotal_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_subtotal.grid(row=1,column=3)

services = Label(left, font=('arial',16,'bold'),text = "Service Charge", bd = 16, anchor = 'w' )
services.grid(row=2,column=2,sticky = E)
txt_services = Entry(left,font=('arial',16,'bold'), textvariable=services_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_services.grid(row=2,column=3)

tax = Label(left, font=('arial',16,'bold'),text = "GST", bd = 16, anchor = 'w' )
tax.grid(row=3,column=2,sticky = E)
txt_tax = Entry(left,font=('arial',16,'bold'), textvariable=tax_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_tax.grid(row=3,column=3)

cost = Label(left, font=('arial',16,'bold'),text = "Total Tax", bd = 16, anchor = 'w' )
cost.grid(row=4,column=2,sticky = E)
txt_cost = Entry(left,font=('arial',16,'bold'), textvariable=cost_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_cost.grid(row=4,column=3)

total = Label(left, font=('arial',16,'bold'),text = "Total Cost", bd = 16, anchor = 'w' )
total.grid(row=5,column=2,sticky = E)
txt_total = Entry(left,font=('arial',16,'bold'), textvariable=total_inp, bd=10, insertwidth =4,bg = "powder blue", justify ='right')
txt_total.grid(row=5,column=3) 


### right Frame Button ###########

btn_total = Button(left, padx= 16, pady= 8, bd= 16, fg= "black", font=('arial',16,'bold'), width=10, text= "Total", bg= "powder blue",command = ref)
btn_total.grid(row=7, column= 1)

btn_reset = Button(left, padx= 16, pady= 8, bd= 16, fg= "black", font=('arial',16,'bold'), width=10, text= "Reset", bg= "powder blue",command = reset)
btn_reset.grid(row=7, column= 2)

btn_exit = Button(left, padx= 16, pady= 8, bd= 16, fg= "black", font=('arial',16,'bold'), width=10, text= "Exit", bg= "powder blue",command = qexit)
btn_exit.grid(row=7, column= 3)

btn_bck = Button(left, padx= 16, pady= 8, bd= 16, fg= "black", font=('arial',16,'bold'), width=10, text= "Back", bg= "powder blue",command = bck)
btn_bck.grid(row=8, column= 2)




root.mainloop()

