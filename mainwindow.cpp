#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <qmath.h>
#include "vector.h"
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pic;
    pic.load("/Users/denisshpilka/cursova/images/points-to-vector.png");
    ui->label_4->setPixmap(pic);
    pic.load("/Users/denisshpilka/cursova/images/cos.png");
    ui->label_cos_image->setPixmap(pic);
    pic.load("/Users/denisshpilka/cursova/images/a_d.png");
    ui->label_a_d_image->setPixmap(pic);
    pic.load("/Users/denisshpilka/cursova/images/vector_angl.png");
    ui->label_angle_image->setPixmap(pic);
    pic.load("/Users/denisshpilka/cursova/images/cos.png");
    ui->label_t_cos_image->setPixmap(pic);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::random_task(){
    int random = QRandomGenerator::global()->bounded(1, 15);
    switch(random){
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_2_t);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_3_t);
        break;
    case 3:
         ui->stackedWidget->setCurrentWidget(ui->page_4_t);
         break;
    case 4:
         ui->stackedWidget->setCurrentWidget(ui->page_5_t);
         break;
    case 5:
         ui->stackedWidget->setCurrentWidget(ui->page_6_t);
         break;
    case 6:
         ui->stackedWidget->setCurrentWidget(ui->page_7_t);
         break;
    case 7:
         ui->stackedWidget->setCurrentWidget(ui->page_8_t);
         break;
    case 8:
         ui->stackedWidget->setCurrentWidget(ui->page_9_t);
         break;
    case 9:
         ui->stackedWidget->setCurrentWidget(ui->page__10_t);
         break;
    case 10:
         ui->stackedWidget->setCurrentWidget(ui->page__11_t);
         break;
    case 11:
         ui->stackedWidget->setCurrentWidget(ui->page__12_t);
         break;
    case 12:
         ui->stackedWidget->setCurrentWidget(ui->page__13_t);
         break;
    case 13:
         ui->stackedWidget->setCurrentWidget(ui->page__14_t);
         break;
    case 14:
         ui->stackedWidget->setCurrentWidget(ui->page__15_t);
         break;
    case 15:
         ui->stackedWidget->setCurrentWidget(ui->page__16_t);
         break;
    }
}


//page_0
void MainWindow::on_pushButton_menu_calc_clicked()
{
    QString str = ui->comboBox_menu->currentText();
    if(str == "Модуль вектора"){
        ui->stackedWidget->setCurrentWidget(ui->page_2);
    } else if(str == "Побудова вектора по 2 точкам"){
        ui->stackedWidget->setCurrentWidget(ui->page_3);
    } else if(str == "Напрямні косинуси"){
        ui->stackedWidget->setCurrentWidget(ui->page_4);
    } else if(str == "Додавання і віднімання векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page_5);
    } else if(str == "Скалярний добуток"){
        ui->stackedWidget->setCurrentWidget(ui->page_6);
    } else if(str == "Кут між векторами"){
        ui->stackedWidget->setCurrentWidget(ui->page_7);
    } else if(str == "Проекція вектора на вектор"){
        ui->stackedWidget->setCurrentWidget(ui->page_8);
    } else if(str == "Векторний добуток"){
        ui->stackedWidget->setCurrentWidget(ui->page_9);
    } else if(str == "Мішаний добуток"){
        ui->stackedWidget->setCurrentWidget(ui->page__10);
    } else if(str == "Колінеарність векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page__11);
    } else if(str == "Ортогональність векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page__12);
    } else if(str == "Компланарність векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page__13);
    } else if(str == "Площа трикутника, побудованого на векторах"){
        ui->stackedWidget->setCurrentWidget(ui->page__14);
    } else if(str == "Площа паралелограма, побудованого на векторах"){
        ui->stackedWidget->setCurrentWidget(ui->page__15);
    } else if(str == "Об'єм піраміди, побудованої на векторах"){
        ui->stackedWidget->setCurrentWidget(ui->page__16);
    }
}


void MainWindow::on_pushButton_menu_t_clicked()
{
    QString str = ui->comboBox_menu->currentText();
    if(str == "Модуль вектора"){
        ui->stackedWidget->setCurrentWidget(ui->page_2_t);
    } else if(str == "Побудова вектора по 2 точкам"){
        ui->stackedWidget->setCurrentWidget(ui->page_3_t);
    } else if(str == "Напрямні косинуси"){
        ui->stackedWidget->setCurrentWidget(ui->page_4_t);
    } else if(str == "Додавання і віднімання векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page_5_t);
    } else if(str == "Скалярний добуток"){
        ui->stackedWidget->setCurrentWidget(ui->page_6_t);
    } else if(str == "Кут між векторами"){
        ui->stackedWidget->setCurrentWidget(ui->page_7_t);
    } else if(str == "Проекція вектора на вектор"){
        ui->stackedWidget->setCurrentWidget(ui->page_8_t);
    } else if(str == "Векторний добуток"){
        ui->stackedWidget->setCurrentWidget(ui->page_9_t);
    } else if(str == "Мішаний добуток"){
        ui->stackedWidget->setCurrentWidget(ui->page__10_t);
    } else if(str == "Колінеарність векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page__11_t);
    } else if(str == "Ортогональність векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page__12_t);
    } else if(str == "Компланарність векторів"){
        ui->stackedWidget->setCurrentWidget(ui->page__13_t);
    } else if(str == "Площа трикутника, побудованого на векторах"){
        ui->stackedWidget->setCurrentWidget(ui->page__14_t);
    } else if(str == "Площа паралелограма, побудованого на векторах"){
        ui->stackedWidget->setCurrentWidget(ui->page__15_t);
    } else if(str == "Об'єм піраміди, побудованої на векторах"){
        ui->stackedWidget->setCurrentWidget(ui->page__16_t);
    }
}


void MainWindow::on_pushButton_menu_rand_clicked()
{
    int random = QRandomGenerator::global()->bounded(1, 15);
    switch(random){
    case 1:
        ui->stackedWidget->setCurrentWidget(ui->page_2_t);
        break;
    case 2:
        ui->stackedWidget->setCurrentWidget(ui->page_3_t);
        break;
    case 3:
         ui->stackedWidget->setCurrentWidget(ui->page_4_t);
         break;
    case 4:
         ui->stackedWidget->setCurrentWidget(ui->page_5_t);
         break;
    case 5:
         ui->stackedWidget->setCurrentWidget(ui->page_6_t);
         break;
    case 6:
         ui->stackedWidget->setCurrentWidget(ui->page_7_t);
         break;
    case 7:
         ui->stackedWidget->setCurrentWidget(ui->page_8_t);
         break;
    case 8:
         ui->stackedWidget->setCurrentWidget(ui->page_9_t);
         break;
    case 9:
         ui->stackedWidget->setCurrentWidget(ui->page__10_t);
         break;
    case 10:
         ui->stackedWidget->setCurrentWidget(ui->page__11_t);
         break;
    case 11:
         ui->stackedWidget->setCurrentWidget(ui->page__12_t);
         break;
    case 12:
         ui->stackedWidget->setCurrentWidget(ui->page__13_t);
         break;
    case 13:
         ui->stackedWidget->setCurrentWidget(ui->page__14_t);
         break;
    case 14:
         ui->stackedWidget->setCurrentWidget(ui->page__15_t);
         break;
    case 15:
         ui->stackedWidget->setCurrentWidget(ui->page__16_t);
         break;
    }
}

//page_2
void MainWindow::on_pushButton_len_calculate_clicked()
{
    Vector vec(ui->lineEdit_len_Ax->text().toDouble(), ui->lineEdit_len_Ay->text().toDouble(), ui->lineEdit_len_Az->text().toDouble());
    QString res;
    ui->lineEdit_len_ans->setText(res.setNum(floor(Vector::vec_module(vec)*100)/100));
}
void MainWindow::on_pushButton_len_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_len_clean_clicked()
{
    ui->lineEdit_len_Ax->clear();
    ui->lineEdit_len_Ay->clear();
    ui->lineEdit_len_Az->clear();
    ui->lineEdit_len_ans->clear();
}

//page_3
void MainWindow::on_pushButton_2dot_calc_clicked()
{
    QString res;
    double coord;
    coord = ceil((ui->lineEdit_2dot_Bx->text().toDouble() - ui->lineEdit_2dot_Ax->text().toDouble())*100)/100;
    ui->lineEdit_2dot_ABx->setText(res.setNum(coord));
    coord = ceil((ui->lineEdit_2dot_By->text().toDouble() - ui->lineEdit_2dot_Ay->text().toDouble())*100)/100;
    ui->lineEdit_2dot_ABy->setText(res.setNum(coord));
    coord = ceil((ui->lineEdit_2dot_Bz->text().toDouble() - ui->lineEdit_2dot_Az->text().toDouble())*100)/100;
    ui->lineEdit_2dot_ABz->setText(res.setNum(coord));
}
void MainWindow::on_pushButton_2dot_clean_clicked()
{
    ui->lineEdit_2dot_ABx->clear();
    ui->lineEdit_2dot_ABy->clear();
    ui->lineEdit_2dot_ABz->clear();
    ui->lineEdit_2dot_Ax->clear();
    ui->lineEdit_2dot_Ay->clear();
    ui->lineEdit_2dot_Az->clear();
    ui->lineEdit_2dot_Bx->clear();
    ui->lineEdit_2dot_By->clear();
    ui->lineEdit_2dot_Bz->clear();
}
void MainWindow::on_pushButton_2dot_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_4
void MainWindow::on_pushButton_cos_calc_clicked()
{
    Vector vec(ui->lineEdit_cos_Ax->text().toDouble(), ui->lineEdit_cos_Ay->text().toDouble(), ui->lineEdit_cos_Az->text().toDouble());
    double module = Vector::vec_module(vec);
    QString res;
    ui->lineEdit_cos_cosA->setText(res.setNum(floor(vec.x*100/module + 0.5)/100));
    ui->lineEdit_cos_cosB->setText(res.setNum(floor(vec.y*100/module + 0.5)/100));
    ui->lineEdit_cos_cosG->setText(res.setNum(floor(vec.z*100/module + 0.5)/100));
}
void MainWindow::on_pushButton_cos_clean_clicked()
{
    ui->lineEdit_cos_Ax->clear();
    ui->lineEdit_cos_Ay->clear();
    ui->lineEdit_cos_Az->clear();
    ui->lineEdit_cos_cosA->clear();
    ui->lineEdit_cos_cosB->clear();
    ui->lineEdit_cos_cosG->clear();
}
void MainWindow::on_pushButton_cos_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_5
void MainWindow::on_pushButton_a_d_calc_clicked()
{
    Vector vec_A(ui->lineEdit_a_d_Ax->text().toDouble(), ui->lineEdit_a_d_Ay->text().toDouble(), ui->lineEdit_a_d_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_a_d_Bx->text().toDouble(), ui->lineEdit_a_d_By->text().toDouble(), ui->lineEdit_a_d_Bz->text().toDouble());
    QString res_str;
    Vector res_vec;
    if(ui->comboBox_operation->currentText() == "+"){
        res_vec = vec_A *ui->lineEdit_a_d_A->text().toDouble() + vec_B *ui->lineEdit_a_d_B->text().toDouble();
    }
    else {
        res_vec = vec_A *ui->lineEdit_a_d_A->text().toDouble() + vec_B *ui->lineEdit_a_d_B->text().toDouble()*-1;
    }
    ui->lineEdit_a_d_resx->setText(res_str.setNum(res_vec.x));
    ui->lineEdit_a_d_resy->setText(res_str.setNum(res_vec.y));
    ui->lineEdit_a_d_resz->setText(res_str.setNum(res_vec.z));
}
void MainWindow::on_pushButton_a_d_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_a_d_clear_clicked()
{
    ui->lineEdit_a_d_A->clear();
    ui->lineEdit_a_d_Ax->clear();
    ui->lineEdit_a_d_Ay->clear();
    ui->lineEdit_a_d_Az->clear();
    ui->lineEdit_a_d_B->clear();
    ui->lineEdit_a_d_Bx->clear();
    ui->lineEdit_a_d_By->clear();
    ui->lineEdit_a_d_Bz->clear();
    ui->lineEdit_a_d_resx->clear();
    ui->lineEdit_a_d_resy->clear();
    ui->lineEdit_a_d_resz->clear();
}

//page_6
void MainWindow::on_pushButton_dot_calc_clicked()
{
    Vector vec_A(ui->lineEdit_dot_Ax->text().toDouble(), ui->lineEdit_dot_Ay->text().toDouble(), ui->lineEdit_dot_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_dot_Bx->text().toDouble(), ui->lineEdit_dot_By->text().toDouble(), ui->lineEdit_dot_Bz->text().toDouble());
    double res = Vector::dot_prod(vec_A, vec_B);
    QString res_str;
    ui->lineEdit_dot_res->setText(res_str.setNum(res));
}
void MainWindow::on_pushButton_dot_clean_clicked()
{
    ui->lineEdit_dot_Ax->clear();
    ui->lineEdit_dot_Ay->clear();
    ui->lineEdit_dot_Az->clear();
    ui->lineEdit_dot_Bx->clear();
    ui->lineEdit_dot_By->clear();
    ui->lineEdit_dot_Bz->clear();
    ui->lineEdit_dot_res->clear();
}
void MainWindow::on_pushButton_dot_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_7

void MainWindow::on_pushButton_angle_calc_clicked()
{
    Vector vec_A(ui->lineEdit_angle_Ax->text().toDouble(), ui->lineEdit_angle_Ay->text().toDouble(), ui->lineEdit_angle_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_angle_Bx->text().toDouble(), ui->lineEdit_angle_By->text().toDouble(), ui->lineEdit_angle_Bz->text().toDouble());
    double cos = Vector::dot_prod(vec_A, vec_B)/(Vector::vec_module(vec_A)*Vector::vec_module(vec_B));
    QString res_str;
    ui->lineEdit_angle_cos->setText(res_str.setNum(floor(cos*100 + 0.5)/100));
    ui->lineEdit_angle_arccos->setText(res_str.setNum(floor(acos(cos)*100 + 0.5)/100));
}
void MainWindow::on_pushButton_angle_clear_clicked()
{
    ui->lineEdit_angle_Ax->clear();
    ui->lineEdit_angle_Ay->clear();
    ui->lineEdit_angle_Az->clear();
    ui->lineEdit_angle_Bx->clear();
    ui->lineEdit_angle_By->clear();
    ui->lineEdit_angle_Bz->clear();
    ui->lineEdit_angle_cos->clear();
    ui->lineEdit_angle_arccos->clear();
}
void MainWindow::on_pushButton_angle_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_8
void MainWindow::on_pushButton_pr_calc_clicked()
{
   Vector vec_A(ui->lineEdit_pr_Ax->text().toDouble(), ui->lineEdit_pr_Ay->text().toDouble(), ui->lineEdit_pr_Az->text().toDouble());
   Vector vec_B(ui->lineEdit_pr_Bx->text().toDouble(), ui->lineEdit_pr_By->text().toDouble(), ui->lineEdit_pr_Bz->text().toDouble());
   double res = Vector::dot_prod(vec_A, vec_B)/Vector::vec_module(vec_B);
   res = floor(res*100 + 0.5)/100;
   QString res_str;
   ui->lineEdit_pr_res->setText(res_str.setNum(res));
}
void MainWindow::on_pushButton_pr_clean_clicked()
{
    ui->lineEdit_pr_Ax->clear();
    ui->lineEdit_pr_Ay->clear();
    ui->lineEdit_pr_Az->clear();
    ui->lineEdit_pr_Bx->clear();
    ui->lineEdit_pr_By->clear();
    ui->lineEdit_pr_Bz->clear();
    ui->lineEdit_pr_res->clear();
}
void MainWindow::on_pushButton_pr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_9
void MainWindow::on_pushButton_crpr_calc_clicked()
{
    QString res;
    Vector vec_A(ui->lineEdit_crpr_Ax->text().toDouble(), ui->lineEdit_crpr_Ay->text().toDouble(), ui->lineEdit_crpr_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_crpr_Bx->text().toDouble(), ui->lineEdit_crpr_By->text().toDouble(), ui->lineEdit_crpr_Bz->text().toDouble());
    Vector res_vec = Vector::cross_prod(vec_A, vec_B);
    ui->lineEdit_crpr_resx->setText(res.setNum(res_vec.x));
    ui->lineEdit_crpr_resy->setText(res.setNum(res_vec.y));
    ui->lineEdit_crpr_resz->setText(res.setNum(res_vec.z));
}
void MainWindow::on_pushButton_crpr_clear_clicked()
{
    ui->lineEdit_crpr_Ax->clear();
    ui->lineEdit_crpr_Ay->clear();
    ui->lineEdit_crpr_Az->clear();
    ui->lineEdit_crpr_Bx->clear();
    ui->lineEdit_crpr_By->clear();
    ui->lineEdit_crpr_Bz->clear();
    ui->lineEdit_crpr_resx->clear();
    ui->lineEdit_crpr_resy->clear();
    ui->lineEdit_crpr_resz->clear();
}
void MainWindow::on_pushButton_crpr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}


//page_10
void MainWindow::on_pushButton_mpr_calc_clicked()
{
    Vector vec_A(ui->lineEdit_mpr_Ax->text().toDouble(), ui->lineEdit_mpr_Ay->text().toDouble(), ui->lineEdit_mpr_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_mpr_Bx->text().toDouble(), ui->lineEdit_mpr_By->text().toDouble(), ui->lineEdit_mpr_Bz->text().toDouble());
    Vector vec_C(ui->lineEdit_mpr_Cx->text().toDouble(), ui->lineEdit_mpr_Cy->text().toDouble(), ui->lineEdit_mpr_Cz->text().toDouble());
    double res = Vector::dot_prod(vec_A, Vector::cross_prod(vec_B, vec_C));
    QString res_str;
    ui->lineEdit_mpr_res->setText(res_str.setNum(ceil(res*100)/100));
}
void MainWindow::on_pushButton_mpr_clear_clicked()
{
    ui->lineEdit_mpr_Ax->clear();
    ui->lineEdit_mpr_Ay->clear();
    ui->lineEdit_mpr_Az->clear();
    ui->lineEdit_mpr_Bx->clear();
    ui->lineEdit_mpr_By->clear();
    ui->lineEdit_mpr_Bz->clear();
    ui->lineEdit_mpr_Cx->clear();
    ui->lineEdit_mpr_Cy->clear();
    ui->lineEdit_mpr_Cz->clear();
    ui->lineEdit_mpr_res->clear();
}
void MainWindow::on_pushButton_mpr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}


//page_11
void MainWindow::on_pushButton_col_Calc_clicked()
{
    Vector vec_A(ui->lineEdit_col_Ax->text().toDouble(), ui->lineEdit_col_Ay->text().toDouble(), ui->lineEdit_col_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_col_Bx->text().toDouble(), ui->lineEdit_col_By->text().toDouble(), ui->lineEdit_col_Bz->text().toDouble());
    if((vec_A.x/vec_B.x == vec_A.y/vec_B.y)&&(vec_A.y/vec_B.y == vec_A.z/vec_B.z)){
        ui->lineEdit_col_res->setText("Вектори колінеарні");
    } else {
        ui->lineEdit_col_res->setText("Вектори не колінеарні");
    }

}
void MainWindow::on_pushButton_col_clear_clicked()
{
    ui->lineEdit_col_Ax->clear();
    ui->lineEdit_col_Ay->clear();
    ui->lineEdit_col_Az->clear();
    ui->lineEdit_col_Bx->clear();
    ui->lineEdit_col_By->clear();
    ui->lineEdit_col_Bz->clear();
    ui->lineEdit_col_res->clear();
}
void MainWindow::on_pushButton_col_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}


//page_12
void MainWindow::on_pushButton_orth_calc_clicked()
{
    Vector vec_A(ui->lineEdit_orth_Ax->text().toDouble(), ui->lineEdit_orth_Ay->text().toDouble(), ui->lineEdit_orth_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_orth_Bx->text().toDouble(), ui->lineEdit_orth_By->text().toDouble(), ui->lineEdit_orth_Bz->text().toDouble());
    if(Vector::dot_prod(vec_A, vec_B) == 0){
        ui->lineEdit_orth_res->setText("вектори ортогональні");
    } else {
        ui->lineEdit_orth_res->setText("вектори не ортогональні");
    }
}
void MainWindow::on_pushButton_orth_clear_clicked()
{
    ui->lineEdit_orth_Ax->clear();
    ui->lineEdit_orth_Ay->clear();
    ui->lineEdit_orth_Az->clear();
    ui->lineEdit_orth_Bx->clear();
    ui->lineEdit_orth_By->clear();
    ui->lineEdit_orth_Bz->clear();
    ui->lineEdit_orth_res->clear();
}
void MainWindow::on_pushButton_orth_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}


//page_13
void MainWindow::on_pushButton_copl_calc_clicked()
{
    Vector vec_A(ui->lineEdit_copl_Ax->text().toDouble(), ui->lineEdit_copl_Ay->text().toDouble(), ui->lineEdit_copl_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_copl_Bx->text().toDouble(), ui->lineEdit_copl_By->text().toDouble(), ui->lineEdit_copl_Bz->text().toDouble());
    Vector vec_C(ui->lineEdit_copl_Cx->text().toDouble(), ui->lineEdit_copl_Cy->text().toDouble(), ui->lineEdit_copl_Cz->text().toDouble());
    if(Vector::dot_prod(vec_A, Vector::cross_prod(vec_B, vec_C)) == 0){
        ui->lineEdit_copl_res->setText("вектори компланарні");
    } else {
        ui->lineEdit_copl_res->setText("вектори не компланарні");
    }
}
void MainWindow::on_pushButton_copl_clear_clicked()
{
    ui->lineEdit_copl_Ax->clear();
    ui->lineEdit_copl_Ay->clear();
    ui->lineEdit_copl_Az->clear();
    ui->lineEdit_copl_Bx->clear();
    ui->lineEdit_copl_By->clear();
    ui->lineEdit_copl_Bz->clear();
    ui->lineEdit_copl_Cx->clear();
    ui->lineEdit_copl_Cy->clear();
    ui->lineEdit_copl_Cz->clear();
    ui->lineEdit_copl_res->clear();
}
void MainWindow::on_pushButton_copl_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_14
void MainWindow::on_pushButton_tr_res_clicked()
{
    Vector vec_A(ui->lineEdit_tr_Ax->text().toDouble(), ui->lineEdit_tr_Ay->text().toDouble(), ui->lineEdit_tr_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_tr_Bx->text().toDouble(), ui->lineEdit_tr_By->text().toDouble(), ui->lineEdit_tr_Bz->text().toDouble());
    double res = 0.5 * Vector::vec_module(Vector::cross_prod(vec_A, vec_B));
    QString res_str;
    ui->lineEdit_tr_res->setText(res_str.setNum(floor(res * 100 + 0.5)/100));
}
void MainWindow::on_pushButton_tr_clear_clicked()
{
    ui->lineEdit_tr_Ax->clear();
    ui->lineEdit_tr_Ay->clear();
    ui->lineEdit_tr_Az->clear();
    ui->lineEdit_tr_Bx->clear();
    ui->lineEdit_tr_By->clear();
    ui->lineEdit_tr_Bz->clear();
    ui->lineEdit_tr_res->clear();
}
void MainWindow::on_pushButton_tr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}


//page_15
void MainWindow::on_pushButton_par_calc_clicked()
{
    Vector vec_A(ui->lineEdit_par_Ax->text().toDouble(), ui->lineEdit_par_Ay->text().toDouble(), ui->lineEdit_par_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_par_Bx->text().toDouble(), ui->lineEdit_par_By->text().toDouble(), ui->lineEdit_par_Bz->text().toDouble());
    double res = Vector::vec_module(Vector::cross_prod(vec_A, vec_B));
    QString res_str;
    ui->lineEdit_par_res->setText(res_str.setNum(floor(res * 100 + 0.5)/100));
}
void MainWindow::on_pushButton_par_clean_clicked()
{
    ui->lineEdit_par_Ax->clear();
    ui->lineEdit_par_Ay->clear();
    ui->lineEdit_par_Az->clear();
    ui->lineEdit_par_Bx->clear();
    ui->lineEdit_par_By->clear();
    ui->lineEdit_par_Bz->clear();
    ui->lineEdit_par_res->clear();
}
void MainWindow::on_pushButton_par_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_16
void MainWindow::on_pushButton_pir_calc_clicked()
{
    Vector vec_A(ui->lineEdit_pir_Ax->text().toDouble(), ui->lineEdit_pir_Ay->text().toDouble(), ui->lineEdit_pir_Az->text().toDouble());
    Vector vec_B(ui->lineEdit_pir_Bx->text().toDouble(), ui->lineEdit_pir_By->text().toDouble(), ui->lineEdit_pir_Bz->text().toDouble());
    Vector vec_C(ui->lineEdit_pir_Cx->text().toDouble(), ui->lineEdit_pir_Cy->text().toDouble(), ui->lineEdit_pir_Cz->text().toDouble());
    double res = abs(Vector::dot_prod(vec_A, Vector::cross_prod(vec_B, vec_C))/6);
    QString res_str;
    ui->lineEdit_pir_res->setText(res_str.setNum(floor(res*100 + 0.5)/100));
}
void MainWindow::on_pushButton_pir_clean_clicked()
{
    ui->lineEdit_pir_Ax->clear();
    ui->lineEdit_pir_Ay->clear();
    ui->lineEdit_pir_Az->clear();
    ui->lineEdit_pir_Bx->clear();
    ui->lineEdit_pir_By->clear();
    ui->lineEdit_pir_Bz->clear();
    ui->lineEdit_pir_Cx->clear();
    ui->lineEdit_pir_Cy->clear();
    ui->lineEdit_pir_Cz->clear();
    ui->lineEdit_pir_res->clear();
}
void MainWindow::on_pushButton_pir_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}

//page_2_t
void MainWindow::on_pushButton_t_mod_next_clicked()
{
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    QString str;
    ui->lineEdit_t_mod_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mod_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mod_Az->setText(str.setNum(coord));
    ui->lineEdit_t_mod_res->clear();
    ui->lineEdit_t_mod_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_mod_check_clicked()
{
    Vector vec(ui->lineEdit_t_mod_Ax->text().toInt(), ui->lineEdit_t_mod_Ay->text().toInt(), ui->lineEdit_t_mod_Az->text().toInt());
    if(ui->lineEdit_t_mod_res->text() == ""){
        ui->lineEdit_t_mod_res->setStyleSheet("background-color: yellow; color: black;");
    } else if (ui->lineEdit_t_mod_res->text().toDouble() == floor(Vector::vec_module(vec)*100 + 0.5)/100){
        ui->lineEdit_t_mod_res->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_mod_res->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_mod_clear_clicked()
{
    ui->lineEdit_t_mod_Ax->clear();
    ui->lineEdit_t_mod_Ax->clear();
    ui->lineEdit_t_mod_Ax->clear();
    ui->lineEdit_t_mod_Ax->clear();
    ui->lineEdit_t_mod_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_mod_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_mod_n_p_clicked()
{
    MainWindow::random_task();
}

//page_3_t
void MainWindow::on_pushButton_t_2dot_next_clicked()
{
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    QString str;
    ui->lineEdit_t_2dot_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_2dot_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_2dot_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_2dot_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_2dot_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_2dot_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_2dot_resx->clear();
    ui->lineEdit_t_2dot_resx->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_2dot_resy->clear();
    ui->lineEdit_t_2dot_resy->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_2dot_resz->clear();
    ui->lineEdit_t_2dot_resz->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_2dot_check_clicked()
{
    Vector vec(ui->lineEdit_t_2dot_Bx->text().toInt() - ui->lineEdit_t_2dot_Ax->text().toInt(),
               ui->lineEdit_t_2dot_By->text().toInt() - ui->lineEdit_t_2dot_Ay->text().toInt(),
               ui->lineEdit_t_2dot_Bz->text().toInt() - ui->lineEdit_t_2dot_Az->text().toInt());
    if(ui->lineEdit_t_2dot_resx->text() == "" || ui->lineEdit_t_2dot_resy->text() == "" || ui->lineEdit_t_2dot_resz->text() == ""){
        ui->lineEdit_t_2dot_resx->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_2dot_resy->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_2dot_resz->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_2dot_resx->text().toInt() == vec.x
              && ui->lineEdit_t_2dot_resy->text().toInt() == vec.y
              && ui->lineEdit_t_2dot_resz->text().toInt() == vec.z) {
        ui->lineEdit_t_2dot_resx->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_2dot_resy->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_2dot_resz->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_2dot_resx->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_2dot_resy->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_2dot_resz->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_2dot_clear_clicked()
{
    ui->lineEdit_t_2dot_Ax->clear();
    ui->lineEdit_t_2dot_Ay->clear();
    ui->lineEdit_t_2dot_Az->clear();
    ui->lineEdit_t_2dot_Bx->clear();
    ui->lineEdit_t_2dot_By->clear();
    ui->lineEdit_t_2dot_Bz->clear();
    ui->lineEdit_t_2dot_resx->clear();
    ui->lineEdit_t_2dot_resy->clear();
    ui->lineEdit_t_2dot_resz->clear();
    ui->lineEdit_t_2dot_resx->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_2dot_resy->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_2dot_resz->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_2dot_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_2dot_n_p_clicked()
{
    MainWindow::random_task();
}

//page_4_t
void MainWindow::on_pushButton_t_cos_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);

    ui->lineEdit_t_cos_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_cos_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_cos_Az->setText(str.setNum(coord));

    ui->lineEdit_t_cosA->clear();
    ui->lineEdit_t_cosA->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_cosB->clear();
    ui->lineEdit_t_cosB->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_cosG->clear();
    ui->lineEdit_t_cosG->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_cos_check_clicked()
{
    Vector vec(ui->lineEdit_t_cos_Ax->text().toInt(), ui->lineEdit_t_cos_Ay->text().toInt(), ui->lineEdit_t_cos_Az->text().toInt());
    if(ui->lineEdit_t_cosA->text() == "" || ui->lineEdit_t_cosB->text() == "" || ui->lineEdit_t_cosG->text() == ""){
        ui->lineEdit_t_cosA->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_cosB->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_cosG->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_cosA->text().toDouble() == floor((vec.x/Vector::vec_module(vec))*100 + 0.5)/100
              && ui->lineEdit_t_cosB->text().toDouble() == floor((vec.y/Vector::vec_module(vec))*100 + 0.5)/100
              && ui->lineEdit_t_cosG->text().toDouble() == floor((vec.z/Vector::vec_module(vec))*100 + 0.5)/100) {
        ui->lineEdit_t_cosA->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_cosB->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_cosG->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_cosA->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_cosB->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_cosG->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_cos_clear_clicked()
{
    ui->lineEdit_t_cos_Ax->clear();
    ui->lineEdit_t_cos_Ay->clear();
    ui->lineEdit_t_cos_Az->clear();
    ui->lineEdit_t_cosA->clear();
    ui->lineEdit_t_cosA->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_cosB->clear();
    ui->lineEdit_t_cosB->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_cosG->clear();
    ui->lineEdit_t_cosG->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_cos_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_cos_n_p_clicked()
{
    MainWindow::random_task();
}


//page_5_t

void MainWindow::on_pushButton_t_a_d_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_a_d_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_a_d_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_a_d_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_a_d_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_a_d_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_a_d_Bz->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-5, 5);
    ui->lineEdit_t_a_d_A->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-5, 5);
    ui->lineEdit_t_a_d_B->setText(str.setNum(coord));
    if(coord%2 == 0){
        ui->comboBox_a_d->setCurrentIndex(0);
    } else {
        ui->comboBox_a_d->setCurrentIndex(1);
    }
}
void MainWindow::on_pushButton_t_a_d_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_a_d_Ax->text().toInt(), ui->lineEdit_t_a_d_Ay->text().toInt(), ui->lineEdit_t_a_d_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_a_d_Bx->text().toInt(), ui->lineEdit_t_a_d_By->text().toInt(), ui->lineEdit_t_a_d_Bz->text().toInt());
    Vector vec_res;
    if(ui->comboBox_a_d->currentIndex() == 0) {
        vec_res = vec_A*ui->lineEdit_t_a_d_A->text().toInt() + vec_B*ui->lineEdit_t_a_d_B->text().toInt();
    } else {
        vec_res = vec_A*ui->lineEdit_t_a_d_A->text().toInt() + vec_B*ui->lineEdit_t_a_d_B->text().toInt()*-1;
    }
    if(ui->lineEdit_t_a_d_resx->text() == "" || ui->lineEdit_t_a_d_resy->text() == "" || ui->lineEdit_t_a_d_resz->text() == ""){
        ui->lineEdit_t_a_d_resx->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_a_d_resy->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_a_d_resz->setStyleSheet("background-color: yellow; color: black;");
    } else if (ui->lineEdit_t_a_d_resx->text().toInt() == vec_res.x
               && ui->lineEdit_t_a_d_resy->text().toInt() == vec_res.y
               && ui->lineEdit_t_a_d_resz->text().toInt() == vec_res.z){
        ui->lineEdit_t_a_d_resx->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_a_d_resy->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_a_d_resz->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_a_d_resx->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_a_d_resy->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_a_d_resz->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_a_d_clear_clicked()
{

    ui->lineEdit_t_a_d_Ax->clear();
    ui->lineEdit_t_a_d_Ay->clear();
    ui->lineEdit_t_a_d_Az->clear();
    ui->lineEdit_t_a_d_Bx->clear();
    ui->lineEdit_t_a_d_By->clear();
    ui->lineEdit_t_a_d_Bz->clear();
    ui->lineEdit_t_a_d_A->clear();
    ui->lineEdit_t_a_d_B->clear();
    ui->lineEdit_t_a_d_resx->clear();
    ui->lineEdit_t_a_d_resy->clear();
    ui->lineEdit_t_a_d_resz->clear();

}
void MainWindow::on_pushButton_t_a_d_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_a_d_n_p_clicked()
{
    MainWindow::random_task();
}


//page_6_t

void MainWindow::on_pushButton_t_dot_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_dot_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_dot_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_dot_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_dot_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_dot_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_dot_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_dot_res->clear();
    ui->lineEdit_t_dot_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_dot_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_dot_Ax->text().toInt(), ui->lineEdit_t_dot_Ay->text().toInt(), ui->lineEdit_t_dot_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_dot_Bx->text().toInt(), ui->lineEdit_t_dot_By->text().toInt(), ui->lineEdit_t_dot_Bz->text().toInt());
    if(ui->lineEdit_t_dot_res->text() == ""){
        ui->lineEdit_t_dot_res->setStyleSheet("background-color: yellow; color: black;");
    } else if (ui->lineEdit_t_dot_res->text().toInt() == Vector::dot_prod(vec_A, vec_B)){
        ui->lineEdit_t_dot_res->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_dot_res->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_dot_clear_clicked()
{
    ui->lineEdit_t_dot_Ax->clear();
    ui->lineEdit_t_dot_Ay->clear();
    ui->lineEdit_t_dot_Az->clear();
    ui->lineEdit_t_dot_res->clear();
    ui->lineEdit_t_dot_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_dot_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_dot_n_p_clicked()
{
    MainWindow::random_task();
}

//page_7_t
void MainWindow::on_pushButton_t_angle_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_angle_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_angle_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_angle_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_angle_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_angle_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_angle_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_angle_cos->clear();
    ui->lineEdit_t_angle_cos->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_angle_acos->clear();
    ui->lineEdit_t_angle_acos->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_angle_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_angle_Ax->text().toInt(), ui->lineEdit_t_angle_Ay->text().toInt(), ui->lineEdit_t_angle_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_angle_Bx->text().toInt(), ui->lineEdit_t_angle_By->text().toInt(), ui->lineEdit_t_angle_Bz->text().toInt());
    double cos = floor((Vector::dot_prod(vec_A, vec_B)/(Vector::vec_module(vec_A)*Vector::vec_module(vec_B)))*100 + 0.5)/100;
    if(ui->lineEdit_t_angle_cos->text() == ""){
       ui->lineEdit_t_angle_cos->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_angle_cos->text().toDouble() == cos) {
       ui->lineEdit_t_angle_cos->setStyleSheet("background-color: green; color: black;");
    } else {
       ui->lineEdit_t_angle_cos->setStyleSheet("background-color: red; color: black;");
    }

    if(ui->lineEdit_t_angle_acos->text() == ""){
       ui->lineEdit_t_angle_acos->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_angle_acos->text().toDouble() == floor(acos(cos)*100+0.5)/100) {
       ui->lineEdit_t_angle_acos->setStyleSheet("background-color: green; color: black;");
    } else {
       ui->lineEdit_t_angle_acos->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_angle_clear_clicked()
{
    ui->lineEdit_t_angle_Ax->clear();
    ui->lineEdit_t_angle_Ay->clear();
    ui->lineEdit_t_angle_Az->clear();
    ui->lineEdit_t_angle_Bx->clear();
    ui->lineEdit_t_angle_By->clear();
    ui->lineEdit_t_angle_Bz->clear();
    ui->lineEdit_t_angle_cos->clear();
    ui->lineEdit_t_angle_acos->clear();
    ui->lineEdit_t_angle_cos->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_angle_acos->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_angle_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_angle_n_p_clicked()
{
    MainWindow::random_task();
}


//page_8_t
void MainWindow::on_pushButton_t_pr_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pr_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pr_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pr_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pr_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pr_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pr_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_pr_res->clear();
    ui->lineEdit_t_pr_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_pr_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_pr_Ax->text().toInt(), ui->lineEdit_t_pr_Ay->text().toInt(), ui->lineEdit_t_pr_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_pr_Bx->text().toInt(), ui->lineEdit_t_pr_By->text().toInt(), ui->lineEdit_t_pr_Bz->text().toInt());
    double res = floor((Vector::dot_prod(vec_A, vec_B)/Vector::vec_module(vec_B))*100+0.5)/100;
    if(ui->lineEdit_t_pr_res->text() == ""){
        ui->lineEdit_t_pr_res->setStyleSheet("background-color: yellow; color: black;");
    } else if (ui->lineEdit_t_pr_res->text().toDouble() == res){
        ui->lineEdit_t_pr_res->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_pr_res->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_pr_clear_clicked()
{
    ui->lineEdit_t_pr_Ax->clear();
    ui->lineEdit_t_pr_Ay->clear();
    ui->lineEdit_t_pr_Az->clear();
    ui->lineEdit_t_pr_Bx->clear();
    ui->lineEdit_t_pr_By->clear();
    ui->lineEdit_t_pr_Bz->clear();
    ui->lineEdit_t_pr_res->clear();
    ui->lineEdit_t_pr_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_pr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_pr_n_p_clicked()
{
    MainWindow::random_task();
}


//page_9_t
void MainWindow::on_pushButton_t_crpr_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_crpr_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_crpr_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_crpr_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_crpr_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_crpr_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_crpr_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_crpr_resx->clear();
    ui->lineEdit_t_crpr_resx->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_crpr_resy->clear();
    ui->lineEdit_t_crpr_resy->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_crpr_resz->clear();
    ui->lineEdit_t_crpr_resz->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_crpr_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_crpr_Ax->text().toInt(), ui->lineEdit_t_crpr_Ay->text().toInt(), ui->lineEdit_t_crpr_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_crpr_Bx->text().toInt(), ui->lineEdit_t_crpr_By->text().toInt(), ui->lineEdit_t_crpr_Bz->text().toInt());
    Vector vec_res = Vector::cross_prod(vec_A, vec_B);
    if(ui->lineEdit_t_crpr_resx->text() == "" || ui->lineEdit_t_crpr_resy->text() == "" || ui->lineEdit_t_crpr_resz->text() == ""){
        ui->lineEdit_t_crpr_resx->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_crpr_resy->setStyleSheet("background-color: yellow; color: black;");
        ui->lineEdit_t_crpr_resz->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_crpr_resx->text().toInt() == vec_res.x
              && ui->lineEdit_t_crpr_resy->text().toInt() == vec_res.y
              && ui->lineEdit_t_crpr_resz->text().toInt() == vec_res.z) {
        ui->lineEdit_t_crpr_resx->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_crpr_resy->setStyleSheet("background-color: green; color: black;");
        ui->lineEdit_t_crpr_resz->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_crpr_resx->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_crpr_resy->setStyleSheet("background-color: red; color: black;");
        ui->lineEdit_t_crpr_resz->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_crpr_clear_clicked()
{
    ui->lineEdit_t_crpr_Ax->clear();
    ui->lineEdit_t_crpr_Ay->clear();
    ui->lineEdit_t_crpr_Az->clear();
    ui->lineEdit_t_crpr_Bx->clear();
    ui->lineEdit_t_crpr_By->clear();
    ui->lineEdit_t_crpr_Bz->clear();
    ui->lineEdit_t_crpr_resx->clear();
    ui->lineEdit_t_crpr_resy->clear();
    ui->lineEdit_t_crpr_resz->clear();
    ui->lineEdit_t_crpr_resx->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_crpr_resy->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_crpr_resz->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_crpr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_crpr_n_p_clicked()
{
    MainWindow::random_task();
}


//page__10_t
void MainWindow::on_pushButton_t_mpr_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Bz->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Cx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Cy->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_mpr_Cz->setText(str.setNum(coord));

    ui->lineEdit_t_crpr_resx->clear();
    ui->lineEdit_t_crpr_resx->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_mpr_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_mpr_Ax->text().toInt(), ui->lineEdit_t_mpr_Ay->text().toInt(), ui->lineEdit_t_mpr_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_mpr_Bx->text().toInt(), ui->lineEdit_t_mpr_By->text().toInt(), ui->lineEdit_t_mpr_Bz->text().toInt());
    Vector vec_C(ui->lineEdit_t_mpr_Cx->text().toInt(), ui->lineEdit_t_mpr_Cy->text().toInt(), ui->lineEdit_t_mpr_Cz->text().toInt());
    double res = floor(Vector::dot_prod(vec_A, Vector::cross_prod(vec_B, vec_C))*100+0.5)/100;
    if(ui->lineEdit_t_mpr_res->text() == ""){
        ui->lineEdit_t_mpr_res->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_mpr_res->text().toDouble() == res){
        ui->lineEdit_t_mpr_res->setStyleSheet("background-color: green; color: black;");
    } else {
        ui->lineEdit_t_mpr_res->setStyleSheet("background-color: red; color: black;");
    }

}
void MainWindow::on_pushButton_t_mpr_clear_clicked()
{
    ui->lineEdit_t_mpr_Ax->clear();
    ui->lineEdit_t_mpr_Ay->clear();
    ui->lineEdit_t_mpr_Az->clear();
    ui->lineEdit_t_mpr_Bx->clear();
    ui->lineEdit_t_mpr_By->clear();
    ui->lineEdit_t_mpr_Bz->clear();
    ui->lineEdit_t_mpr_Cx->clear();
    ui->lineEdit_t_mpr_Cy->clear();
    ui->lineEdit_t_mpr_Cz->clear();
    ui->lineEdit_t_mpr_res->clear();
    ui->lineEdit_t_mpr_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_mpr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_mpr_n_p_clicked()
{
    MainWindow::random_task();
}


//page_11_t
void MainWindow::on_pushButton_t_col_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-10, 10);
    int mult = QRandomGenerator::global()->bounded(-5, 5);
    ui->lineEdit_t_col_Ax->setText(str.setNum(coord));
    ui->lineEdit_t_col_Bx->setText(str.setNum(coord*mult));
    coord = QRandomGenerator::global()->bounded(-10, 10);
    ui->lineEdit_t_col_By->setText(str.setNum(coord*mult));
    coord = QRandomGenerator::global()->bounded(-10, 10);
    ui->lineEdit_t_col_Az->setText(str.setNum(coord));

    ui->lineEdit_t_col_Ay->setText("n");
    ui->lineEdit_t_col_Bz->setText("k");

    ui->lineEdit_t_col_resn->clear();
    ui->lineEdit_t_col_resn->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_col_resk->clear();
    ui->lineEdit_t_col_resk->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_col_check_clicked()
{
    int mult = ui->lineEdit_t_col_Bx->text().toInt()/ui->lineEdit_t_col_Ax->text().toInt();
    if(ui->lineEdit_t_col_resn->text() == "" || ui->lineEdit_t_col_resk->text() == ""){
         ui->lineEdit_t_col_resn->setStyleSheet("background-color: yellow; color: black;");
         ui->lineEdit_t_col_resk->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_col_By->text().toInt()/ui->lineEdit_t_col_resn->text().toInt() == mult
              && ui->lineEdit_t_col_resk->text().toInt()/ui->lineEdit_t_col_Az->text().toInt()== mult) {
         ui->lineEdit_t_col_resn->setStyleSheet("background-color: green; color: black;");
         ui->lineEdit_t_col_resk->setStyleSheet("background-color: green; color: black;");
    } else {
         ui->lineEdit_t_col_resn->setStyleSheet("background-color: red; color: black;");
         ui->lineEdit_t_col_resk->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_col_clear_clicked()
{
    ui->lineEdit_t_col_Ax->clear();
    ui->lineEdit_t_col_Ay->clear();
    ui->lineEdit_t_col_Az->clear();
    ui->lineEdit_t_col_Bx->clear();
    ui->lineEdit_t_col_By->clear();
    ui->lineEdit_t_col_Bz->clear();

    ui->lineEdit_t_col_resn->clear();
    ui->lineEdit_t_col_resn->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_col_resk->clear();
    ui->lineEdit_t_col_resk->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_col_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_col_n_p_clicked()
{
    MainWindow::random_task();
}

//page_12_t
void MainWindow::on_pushButton_t_orth_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-10, 10);
    int mult = QRandomGenerator::global()->bounded(-10, 10);
    ui->lineEdit_t_orth_Ax->setText(str.setNum(coord*mult));
    ui->lineEdit_t_orth_By->setText(str.setNum(coord));
    ui->lineEdit_t_orth_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-10, 10);
    ui->lineEdit_t_orth_Bx->setText(str.setNum(coord));

    ui->lineEdit_t_orth_Ay->setText("n");
    ui->lineEdit_t_orth_Bz->setText("k");


    ui->lineEdit_t_orth_resn->clear();
    ui->lineEdit_t_orth_resn->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_orth_resk->clear();
    ui->lineEdit_t_orth_resk->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_orth_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_orth_Ax->text().toInt(), ui->lineEdit_t_orth_resn->text().toInt(), ui->lineEdit_t_orth_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_orth_Bx->text().toInt(), ui->lineEdit_t_orth_By->text().toInt(), ui->lineEdit_t_orth_resk->text().toInt());
    if(ui->lineEdit_t_orth_resn->text() == "" || ui->lineEdit_t_orth_resk->text() == ""){
         ui->lineEdit_t_orth_resn->setStyleSheet("background-color: yellow; color: black;");
         ui->lineEdit_t_orth_resk->setStyleSheet("background-color: yellow; color: black;");
    } else if(Vector::dot_prod(vec_A, vec_B) == 0) {
         ui->lineEdit_t_orth_resn->setStyleSheet("background-color: green; color: black;");
         ui->lineEdit_t_orth_resk->setStyleSheet("background-color: green; color: black;");
    } else {
         ui->lineEdit_t_orth_resn->setStyleSheet("background-color: red; color: black;");
         ui->lineEdit_t_orth_resk->setStyleSheet("background-color: red; color: black;");
    }

}
void MainWindow::on_pushButton_t_orth_clear_clicked()
{
    ui->lineEdit_t_orth_Ax->clear();
    ui->lineEdit_t_orth_Ay->clear();
    ui->lineEdit_t_orth_Az->clear();
    ui->lineEdit_t_orth_Bx->clear();
    ui->lineEdit_t_orth_By->clear();
    ui->lineEdit_t_orth_Bz->clear();

    ui->lineEdit_t_orth_resn->clear();
    ui->lineEdit_t_orth_resn->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
    ui->lineEdit_t_orth_resk->clear();
    ui->lineEdit_t_orth_resk->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_orth_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_orth_n_p_clicked()
{
    MainWindow::random_task();
}


//page_13_t
void MainWindow::on_pushButton_t_copl_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Bz->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Cx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Cy->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_copl_Cz->setText(str.setNum(coord));

    ui->lineEdit_t_copl_By->setText("n");

    ui->lineEdit_t_tr_res->clear();
    ui->lineEdit_t_tr_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_copl_check_clicked()
{
    double res = (ui->lineEdit_t_copl_Ax->text().toInt()*ui->lineEdit_t_copl_Bz->text().toInt()*ui->lineEdit_t_copl_Cy->text().toInt()
                  +ui->lineEdit_t_copl_Ay->text().toInt()*ui->lineEdit_t_copl_Bx->text().toInt()*ui->lineEdit_t_copl_Cz->text().toInt()
                  -ui->lineEdit_t_copl_Az->text().toInt()*ui->lineEdit_t_copl_Bx->text().toInt()*ui->lineEdit_t_copl_Cy->text().toInt()
                  -ui->lineEdit_t_copl_Ay->text().toInt()*ui->lineEdit_t_copl_Bz->text().toInt()*ui->lineEdit_t_copl_Cx->text().toInt())
            /(ui->lineEdit_t_copl_Ax->text().toInt()*ui->lineEdit_t_copl_Cz->text().toInt()
              -ui->lineEdit_t_copl_Az->text().toInt()*ui->lineEdit_t_copl_Cx->text().toInt()*1.0);
    if(ui->lineEdit_t_copl_res->text() == ""){
        ui->lineEdit_t_copl_res->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_copl_res->text().toDouble() == floor(res*100 +0.5)/100){
        ui->lineEdit_t_copl_res->setStyleSheet("background-color: green; color: black;");
    } else {
         ui->lineEdit_t_copl_res->setStyleSheet("background-color: red; color: black;");
    }

}
void MainWindow::on_pushButton_t_copl_clear_clicked()
{
    ui->lineEdit_t_copl_Ax->clear();
    ui->lineEdit_t_copl_Ay->clear();
    ui->lineEdit_t_copl_Az->clear();
    ui->lineEdit_t_copl_Bx->clear();
    ui->lineEdit_t_copl_By->clear();
    ui->lineEdit_t_copl_Bz->clear();
    ui->lineEdit_t_copl_Cx->clear();
    ui->lineEdit_t_copl_Cy->clear();
    ui->lineEdit_t_copl_Cz->clear();
    ui->lineEdit_t_copl_res->clear();
    ui->lineEdit_t_copl_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");

}
void MainWindow::on_pushButton_t_copl_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_copl_n_p_clicked()
{
    MainWindow::random_task();
}




//page_14_t
void MainWindow::on_pushButton_t_tr_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_tr_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_tr_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_tr_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_tr_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_tr_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_tr_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_tr_res->clear();
    ui->lineEdit_t_tr_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_tr_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_tr_Ax->text().toInt(), ui->lineEdit_t_tr_Ay->text().toInt(), ui->lineEdit_t_tr_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_tr_Bx->text().toInt(), ui->lineEdit_t_tr_By->text().toInt(), ui->lineEdit_t_tr_Bz->text().toInt());
    double area = 0.5 * Vector::vec_module(Vector::cross_prod(vec_A, vec_B));
    if(ui->lineEdit_t_tr_res->text() == ""){
        ui->lineEdit_t_tr_res->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_tr_res->text().toDouble()== floor(area*100 +0.5)/100){
        ui->lineEdit_t_tr_res->setStyleSheet("background-color: green; color: black;");
    } else {
         ui->lineEdit_t_tr_res->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_tr_clear_clicked()
{
    ui->lineEdit_t_tr_Ax->clear();
    ui->lineEdit_t_tr_Ay->clear();
    ui->lineEdit_t_tr_Az->clear();
    ui->lineEdit_t_tr_Bx->clear();
    ui->lineEdit_t_tr_By->clear();
    ui->lineEdit_t_tr_Bz->clear();
    ui->lineEdit_t_tr_res->clear();
    ui->lineEdit_t_tr_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_tr_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_tr_n_p_clicked()
{
    MainWindow::random_task();
}



//page_15_t
void MainWindow::on_pushButton_t_par_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_par_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_par_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_par_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_par_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_par_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_par_Bz->setText(str.setNum(coord));

    ui->lineEdit_t_par_res->clear();
    ui->lineEdit_t_par_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_par_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_par_Ax->text().toInt(), ui->lineEdit_t_par_Ay->text().toInt(), ui->lineEdit_t_par_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_par_Bx->text().toInt(), ui->lineEdit_t_par_By->text().toInt(), ui->lineEdit_t_par_Bz->text().toInt());
    double area =  Vector::vec_module(Vector::cross_prod(vec_A, vec_B));
    if(ui->lineEdit_t_par_res->text() == ""){
        ui->lineEdit_t_par_res->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_par_res->text().toDouble()== floor(area*100 +0.5)/100){
        ui->lineEdit_t_par_res->setStyleSheet("background-color: green; color: black;");
    } else {
         ui->lineEdit_t_par_res->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_par_clear_clicked()
{
    ui->lineEdit_t_par_Ax->clear();
    ui->lineEdit_t_par_Ay->clear();
    ui->lineEdit_t_par_Az->clear();
    ui->lineEdit_t_par_Bx->clear();
    ui->lineEdit_t_par_By->clear();
    ui->lineEdit_t_par_Bz->clear();
    ui->lineEdit_t_par_res->clear();
    ui->lineEdit_t_par_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_par_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_par_n_p_clicked()
{
    MainWindow::random_task();
}

//page_16_t
void MainWindow::on_pushButton_t_pir_next_clicked()
{
    QString str;
    int coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Ax->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Ay->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Az->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Bx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_By->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Bz->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Cx->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Cy->setText(str.setNum(coord));
    coord = QRandomGenerator::global()->bounded(-20, 20);
    ui->lineEdit_t_pir_Cz->setText(str.setNum(coord));

    ui->lineEdit_t_pir_res->clear();
    ui->lineEdit_t_pir_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_pir_check_clicked()
{
    Vector vec_A(ui->lineEdit_t_pir_Ax->text().toInt(), ui->lineEdit_t_pir_Ay->text().toInt(), ui->lineEdit_t_pir_Az->text().toInt());
    Vector vec_B(ui->lineEdit_t_pir_Bx->text().toInt(), ui->lineEdit_t_pir_By->text().toInt(), ui->lineEdit_t_pir_Bz->text().toInt());
    Vector vec_C(ui->lineEdit_t_pir_Cx->text().toInt(), ui->lineEdit_t_pir_Cy->text().toInt(), ui->lineEdit_t_pir_Cz->text().toInt());
    double volume =  abs(Vector::dot_prod(vec_A, Vector::cross_prod(vec_B, vec_C))/6);
    if(ui->lineEdit_t_pir_res->text() == ""){
        ui->lineEdit_t_pir_res->setStyleSheet("background-color: yellow; color: black;");
    } else if(ui->lineEdit_t_pir_res->text().toDouble() == floor(volume*100 + 0.5)/100){
        ui->lineEdit_t_pir_res->setStyleSheet("background-color: green; color: black;");
    } else {
         ui->lineEdit_t_pir_res->setStyleSheet("background-color: red; color: black;");
    }
}
void MainWindow::on_pushButton_t_pir_clear_clicked()
{
    ui->lineEdit_t_pir_Ax->clear();
    ui->lineEdit_t_pir_Ay->clear();
    ui->lineEdit_t_pir_Az->clear();
    ui->lineEdit_t_pir_Bx->clear();
    ui->lineEdit_t_pir_By->clear();
    ui->lineEdit_t_pir_Bz->clear();
    ui->lineEdit_t_pir_Cx->clear();
    ui->lineEdit_t_pir_Cy->clear();
    ui->lineEdit_t_pir_Cz->clear();
    ui->lineEdit_t_pir_res->clear();
    ui->lineEdit_t_pir_res->setStyleSheet("background-color: rgb(230, 230, 230); color: black;");
}
void MainWindow::on_pushButton_t_pir_menu_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
}
void MainWindow::on_pushButton_t_pir_n_p_clicked()
{
    MainWindow::random_task();
}



