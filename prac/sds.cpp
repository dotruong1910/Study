define: generate(string s,int n, string alphabet):    // s rong~
    if len of s == n;
        cout << s << endl;
    else
        TH1 add didit s0 = s+0;
            gen(s0,n);
        // alphabet
        {
            for each char in alphabet:
            newS=s+char c;
             gen(newS,n,alphabet);
        }
        TH2 add digit s1 = s+1;
            gen(s1,n); 
main:
int n;
//*tong quat hoa
alphabet="abcd...z";

gen("",n); // n ki tu


// n0 la so luong so 0 can dien them vao s
// n1 la so luong so 1 can dien them vao s
 
define: generate_nso0_nso1(string s,int n, int n0,int n1):    // s rong~
    if n0 == 0 && n1 == 0;
        cout << s << endl;
    else
        TH1 add didit 0:
        if  n0 > 0:
        s0 =s+'0'
            gen(s0,n0-1,n1-1);
        // alphabet
        
        TH2 add digit 1:
        if(n1 > 0):    
            s1 = s+'1'
            gen(s1,n); 


gen(string s, string alphabet):    
    if(len of s == len alphabet){
        print s
    }
    else
        for each char c in alphabet
            if c not in s
                newS = s + c;
                gen(newS,alphabet);



                def gen(string s, int n, string alphabet):
if len of s == n:
print s
else:
for each char c in alphabet:
newS = s + c
gen(newS, n, alphabet)



main:
alphabet = "01"
int n
gen("", n, alphabet)





// n0 là số lượng số 0 cần điền thêm vào s
// n1 là số lượng số 1 cần điền thêm vào s
def gen(string s, int n0, int n1):
if n0 == 0 && n1 == 0:
print s
else:
TH1 add digit 0:
if n0 > 0:
s0 = s + '0'
gen(s0, n0-1, n1)



TH2 add digit 1:
if n1 > 0:
s1 = s + '1'
gen(s1, n0, n1-1)



3 số 0, 2 số 1
gen("", 3, 2)




// ex 3
def gen(string s, string alphabet):
if len of s == len alphabet:
print s
else:
for each char c in alphabet:
if c not in s:
newS = s + c
gen(newS, alphabet)





// used[i] == true nếu alphabet[i] đã dùng rồi
def gen(string s, string alphabet, bool used):
if len of s == len alphabet:
print s
else:
for i from 0 to len alphabet:
if not used[i]:
newS = s + alphabet[i]
used[i] = true // USE
gen(newS, alphabet, used)
used[i] = false // MARK not USE anymore



gen("", "abc", {false,false,false})





ab



a
b
aa
ab
ba
bb



bài 1 sinh ra tất cả các xâu ký tự có alphabet là "ab" có độ dài 1
bài 2 sinh ra tất cả các xâu ký tự có alphabet là "ab" có độ dài 2



def gen(string s, int n, string alphabet):
if len of s == n:
print s
else:
for each char c in alphabet:
newS = s + c
gen(newS, n, alphabet)



gen("", 1, "abc")
gen("", 2, "abc")
gen("", 3, "abc")



a
b
c



aa
ab
ac
ba
bb
bc
ca
cb
cc



aaa
aab
aac
...





for i from 1 to len alphabet:
gen1("", i, alphabet)