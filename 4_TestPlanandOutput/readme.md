# Test cases

| *Test ID* | *Description*                                              | *Exp I/P* | *Exp O/P* | *Actual Out* |*Type Of Test* | *PASS/FAIL*|  
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|---------------|
|  H_01       |Entry choice |  Add a record| Enter password| enter rollno,name,age,marks|Technical |PASS
|  H_02       |Entry choice|  Delete a record| Asking for rollno that you want to delete| After entering the rollno it will be deleted|Technical   |PASS
|  H_03       |Entry choice|  Modify records| After that it will ask to modify the records| update details again |Technical | PASS
|  H_04       |Entry choice| Generate a marksheet |Asking for rollno|Showing Marksheet|Technical |PASS
|  H_05       |Entry choice|Search a record |Asking for roll no |Showing records of the student|Technical |PASS
|  H_06       |Entry choice|Display all records|it will show all records|it will show student name and marks and all|Technical | PASS
|  H_07       |Entry choice|Change password|It will ask for previous password|After that asking for enter a new password and re-enter password|Technical | PASS
|  H_08       |Entry choice|Exit|It will show process exited |Press any key|Technical| PASS


## Table no: Low level test plan

| *Test ID* | *HLT ID* |*Description*                                              | *Exp IN* | *Exp OUT* | *Actual Out* |*Type Of Test*  |    
|-------------|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01, H_02, H_03|Tested input| Add,delete and modify|SUCCESS|SUCCESS |Technical |
|  L_02       | H_04, H_05, H_06|Tested input| Generate,search,display|SUCCESS|SUCCESS |Technical |
|  L_03       | H_07, H_08 |Tested input|password and exit|SUCCESS|SUCCEES|Technical |