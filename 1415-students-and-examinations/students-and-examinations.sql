# Write your MySQL query statement below

SELECT Students.student_id, Students.student_name, 
SUBJECTS.subject_name, COUNT(Examinations.subject_name) AS attended_exams
FROM Students CROSS JOIN SUBJECTS  LEFT JOIN
Examinations ON Examinations.subject_name = SUBJECTS.subject_name AND Students.student_id = Examinations.student_id
GROUP BY Students.student_id, Students.student_name, 
SUBJECTS.subject_name
ORDER BY Students.student_id, subject_name ;