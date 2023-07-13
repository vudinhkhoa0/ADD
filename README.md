# ADD
## Bảo Bay Bổng có một dãy số nguyên a gồm n phần tử. Một bộ ba chỉ số (i, j, k) đôi một phân biệt được coi là bộ chỉ số đẹp nếu như ai + aj = ak. Hãy cho biết Bảo Bay Bổng có thể tìm được một bộ chỉ số đẹp nào đó hay không? 
### Dữ liệu 
## Dòng đầu tiên của file dữ liệu chứa một số nguyên dương T (1 ≤ T ≤ 50) — số truy vấn.
## Mỗi truy vấn có dạng như sau:
### • Dòng đầu tiên chứa một số nguyên dương n (3 ≤ n ≤ 100).
### • Dòng thứ hai chứa n số nguyên a1, a2, . . . , an (|ai| ≤ 106).
### Kết quả
### • Với mỗi truy vấn in ra trên một dòng riêng biệt kết quả của truy vấn đó: Nếu Bảo Bay Bổng có thể tìm được ít nhất một bộ chỉ số đẹp, in ra YES, ngược lại in ra NO.
### Ví dụ:
| Input      | Output |
|-------     |--------|
|3           |YES     |
|3           |NO      |
|1 2 3       |YES     |
|5           |        |
|0 1 2 6 9   |        |
|5           |        |
|3 1 7 -9 4  |        |
### Giải thích
#### • Ở truy vấn đầu tiên, bộ chỉ số đẹp là (1, 2, 3).
#### • Ở truy vấn thứ hai, không tìm được bộ chỉ số thoả mãn.
#### • Ở truy vấn thứ ba, bộ chỉ số đẹp là (5, 1, 3).
