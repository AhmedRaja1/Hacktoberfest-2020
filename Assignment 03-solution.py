
# def int_round(num):
#     if num > 
#     temp = (num % 10)


def chocolatePrice(ali_budget, bashir_budget):

    if bashir_budget < ali_budget:
        bashir_budget, ali_budget = ali_budget, bashir_budget
    if bashir_budget % ali_budget == 0:
        return ali_budget
    bashir_budget = bashir_budget % ali_budget
    return chocolatePrice(ali_budget, bashir_budget)

def calculateProfit(ali_budget, bashir_budget):
    if type(ali_budget) == float or type(bashir_budget) == float:
        ali_budget = round(ali_budget)
        bashir_budget = round(bashir_budget)

    if type(ali_budget) == int and type(bashir_budget) == int:
        if ali_budget <= 0 or bashir_budget <= 0:
            return "Not Possible"
        price = chocolatePrice(ali_budget, bashir_budget)
        number_of_chocolate_ali = ali_budget / price
        number_of_chocolate_bashir = bashir_budget / price

        if ali_budget > bashir_budget:
            ali_sale_price = 1.5 * price * number_of_chocolate_ali
            bashir_sale_price = 2 *price * number_of_chocolate_bashir

        else: 
            ali_sale_price = 2 * price * number_of_chocolate_ali
            bashir_sale_price = 1.5 * price * number_of_chocolate_bashir

        ali_profit = ali_sale_price - (price*number_of_chocolate_ali)
        bashir_profit = bashir_sale_price - (price * number_of_chocolate_bashir)

        if bashir_profit > ali_profit:
            return bashir_profit
        else:
            return ali_profit
    else:
        return "Not Possible"


if __name__ == "__main__":
    # price = chocolatePrice(12, 8)
    price = calculateProfit(30, "100")
    print(price)
    # print(((13.548 % 2 )*10)%10)
    # print(4*1.5)