#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_len_calculate_clicked();

    void on_pushButton_len_menu_clicked();

    void on_pushButton_len_clean_clicked();

    void on_pushButton_2dot_calc_clicked();

    void on_pushButton_2dot_clean_clicked();

    void on_pushButton_2dot_menu_clicked();

    void on_pushButton_cos_calc_clicked();

    void on_pushButton_cos_clean_clicked();

    void on_pushButton_cos_menu_clicked();

    void on_pushButton_a_d_menu_clicked();

    void on_pushButton_a_d_clear_clicked();

    void on_pushButton_a_d_calc_clicked();

    void on_pushButton_dot_calc_clicked();

    void on_pushButton_dot_clean_clicked();

    void on_pushButton_dot_menu_clicked();

    void on_pushButton_angle_calc_clicked();

    void on_pushButton_angle_clear_clicked();

    void on_pushButton_angle_menu_clicked();

    void on_pushButton_pr_calc_clicked();

    void on_pushButton_pr_clean_clicked();

    void on_pushButton_pr_menu_clicked();

    void on_pushButton_crpr_calc_clicked();

    void on_pushButton_crpr_clear_clicked();

    void on_pushButton_crpr_menu_clicked();

    void on_pushButton_mpr_calc_clicked();

    void on_pushButton_mpr_clear_clicked();

    void on_pushButton_mpr_menu_clicked();

    void on_pushButton_col_Calc_clicked();

    void on_pushButton_col_clear_clicked();

    void on_pushButton_col_menu_clicked();

    void on_pushButton_orth_calc_clicked();

    void on_pushButton_orth_clear_clicked();

    void on_pushButton_orth_menu_clicked();

    void on_pushButton_copl_calc_clicked();

    void on_pushButton_copl_clear_clicked();

    void on_pushButton_copl_menu_clicked();

    void on_pushButton_tr_res_clicked();

    void on_pushButton_tr_clear_clicked();

    void on_pushButton_tr_menu_clicked();

    void on_pushButton_par_calc_clicked();

    void on_pushButton_par_clean_clicked();

    void on_pushButton_par_menu_clicked();

    void on_pushButton_pir_calc_clicked();

    void on_pushButton_pir_clean_clicked();

    void on_pushButton_pir_menu_clicked();

    void on_pushButton_t_mod_next_clicked();

    void on_pushButton_t_mod_check_clicked();

    void on_pushButton_t_mod_clear_clicked();

    void on_pushButton_t_mod_menu_clicked();

    void on_pushButton_t_2dot_next_clicked();

    void on_pushButton_t_2dot_check_clicked();

    void on_pushButton_t_2dot_clear_clicked();

    void on_pushButton_t_2dot_menu_clicked();

    void on_pushButton_t_cos_next_clicked();

    void on_pushButton_t_cos_check_clicked();

    void on_pushButton_t_cos_clear_clicked();

    void on_pushButton_t_cos_menu_clicked();

    void on_pushButton_t_a_d_next_clicked();

    void on_pushButton_t_a_d_check_clicked();

    void on_pushButton_t_a_d_clear_clicked();

    void on_pushButton_t_a_d_menu_clicked();

    void on_pushButton_t_dot_next_clicked();

    void on_pushButton_t_dot_check_clicked();

    void on_pushButton_t_dot_clear_clicked();

    void on_pushButton_t_dot_menu_clicked();

    void on_pushButton_t_angle_next_clicked();

    void on_pushButton_t_angle_check_clicked();

    void on_pushButton_t_angle_clear_clicked();

    void on_pushButton_t_angle_menu_clicked();

    void on_pushButton_t_pr_next_clicked();

    void on_pushButton_t_pr_check_clicked();

    void on_pushButton_t_pr_clear_clicked();

    void on_pushButton_t_pr_menu_clicked();

    void on_pushButton_t_crpr_next_clicked();

    void on_pushButton_t_crpr_check_clicked();

    void on_pushButton_t_crpr_clear_clicked();

    void on_pushButton_t_crpr_menu_clicked();

    void on_pushButton_t_mpr_next_clicked();

    void on_pushButton_t_mpr_check_clicked();

    void on_pushButton_t_mpr_clear_clicked();

    void on_pushButton_t_mpr_menu_clicked();

    void on_pushButton_t_col_next_clicked();

    void on_pushButton_t_col_check_clicked();

    void on_pushButton_t_col_clear_clicked();

    void on_pushButton_t_col_menu_clicked();

    void on_pushButton_t_orth_next_clicked();

    void on_pushButton_t_orth_check_clicked();

    void on_pushButton_t_orth_clear_clicked();

    void on_pushButton_t_orth_menu_clicked();

    void on_pushButton_t_tr_next_clicked();

    void on_pushButton_t_tr_check_clicked();

    void on_pushButton_t_tr_clear_clicked();

    void on_pushButton_t_tr_menu_clicked();

    void on_pushButton_t_par_next_clicked();

    void on_pushButton_t_par_check_clicked();

    void on_pushButton_t_par_clear_clicked();

    void on_pushButton_t_par_menu_clicked();

    void on_pushButton_t_pir_next_clicked();

    void on_pushButton_t_pir_check_clicked();

    void on_pushButton_t_pir_clear_clicked();

    void on_pushButton_t_pir_menu_clicked();

    void on_pushButton_t_copl_next_clicked();

    void on_pushButton_t_copl_check_clicked();

    void on_pushButton_t_copl_clear_clicked();

    void on_pushButton_t_copl_menu_clicked();

    void on_pushButton_t_mod_n_p_clicked();

    void on_pushButton_t_2dot_n_p_clicked();

    void on_pushButton_t_cos_n_p_clicked();

    void on_pushButton_t_a_d_n_p_clicked();

    void on_pushButton_t_dot_n_p_clicked();

    void on_pushButton_t_angle_n_p_clicked();

    void on_pushButton_t_pr_n_p_clicked();

    void on_pushButton_t_crpr_n_p_clicked();

    void on_pushButton_t_mpr_n_p_clicked();

    void on_pushButton_t_col_n_p_clicked();

    void on_pushButton_t_copl_n_p_clicked();

    void on_pushButton_t_tr_n_p_clicked();

    void on_pushButton_t_par_n_p_clicked();

    void on_pushButton_t_pir_n_p_clicked();

    void on_pushButton_t_orth_n_p_clicked();

    void on_pushButton_menu_rand_clicked();

    void on_pushButton_menu_t_clicked();

    void on_pushButton_menu_calc_clicked();

    void random_task();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
