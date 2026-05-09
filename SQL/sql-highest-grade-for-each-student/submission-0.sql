-- Write your query below
SELECT DISTINCT ON(student_id)
    student_id, exam_id, score
FROM exam_results
order by student_id, score DESC, exam_id