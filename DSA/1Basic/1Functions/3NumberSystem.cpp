// ------------------------- NUMBER SYSTEM CONVERSION ------------------------------
// When We want to conevert a Number of Base10 to Base 2 or Base 8 or Base 16 .
// In whatever base we have to convert our Number we have to divide by it base in which we want to convert it.
// Example :- Number 10 base 10   -> to => (?) base 2.
// 10 % 2 = Remaniner = 0 Qutoient = 10 / 2 = 5
// 5 % 2 =  Remaniner = 1 Qutoient = 5 / 2 = 2
// 2 % 2 =  Remaniner = 0 Qutoient = 2 / 2 = 1
// 1 % 2 =  Remaniner = 1 Qutoient = 1 / 2 = 0
// Then Multiply the Base number in power of (Original base)^0 to the last remainder upto and then add them all.
// 10^0 * 0 + 10^1 * 1 + 10^2 * 0 +10^3 * 1 =1000 + 10 = 1010;

// Now if we want to convert a 634 base 8 to  (?) Base 10.
// 634 % 10 = Remaniner = 4 Qutoient = 63
// 634 % 10 =  Remaniner = 3 Qutoient = 6
// 634 % 10 =  Remaniner = 6 Qutoient = 0
// Now Multiply Remnainer with Orignal Base to Convert to Another Base.
// 4 * 8 ^0;
// 3 * 8 ^1;
// 6 * 8 ^2;
// 384 + 24 + 4 = 412

// One Important Note :-
// We cannot Convert any Base to Any Base Directly
// First we should convert any Base to Decimal and that we Know how to do it.
// Then we should Convert Decimal to Any Base that also we know.
// using this two above we can conevert any Base to Base.