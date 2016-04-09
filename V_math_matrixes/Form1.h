#pragma once
#include "matrix.h"


namespace V_math_matrixes
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		protected:
			/// <summary>
			/// Освободить все используемые ресурсы.
			/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::DataGridView^  Res_Matrix_GridView;
		protected:

		private: System::Windows::Forms::DataGridView^  B_Matrix_GridView;
		protected:

		private: System::Windows::Forms::DataGridView^  A_Matrix_GridView;

		private: System::Windows::Forms::Button^  Add_button;
		private: System::Windows::Forms::Button^  Inverse_B_button;

		private: System::Windows::Forms::Button^  Det_a_button;
		private: System::Windows::Forms::Button^  Tranpose_button_A;






		private: System::Windows::Forms::Button^  Mult_button;


		private: System::Windows::Forms::Button^  Det_b_button;






		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Button^  SaveResToA_button;
		private: System::Windows::Forms::Button^  SaveResToB_button;
		private: System::Windows::Forms::TextBox^  DetAres_textbox;

		private: System::Windows::Forms::TextBox^  DetBres_textbox;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label5;
		private: System::Windows::Forms::Label^  label6;
		private: System::Windows::Forms::Button^  A_creator_buton;
		private: System::Windows::Forms::Button^  B_creator_button;
		private: System::Windows::Forms::NumericUpDown^  Rows_numeric_A;
		private: System::Windows::Forms::NumericUpDown^  Cols_numeric_B;


		private: System::Windows::Forms::NumericUpDown^  Rows_numeric_B;

		private: System::Windows::Forms::NumericUpDown^  Cols_numeric_A;
		private: System::Windows::Forms::Button^  Tranpose_button_B;


		private: System::Windows::Forms::Button^  Inverse_A_button;
		private: System::Windows::Forms::Button^  Triangle_buttonB;
		private: System::Windows::Forms::Button^  Triangle_buttonA;
		private: System::Windows::Forms::Button^  Reset_button_A;
		private: System::Windows::Forms::Button^  Reset_button_B;
		private: System::Windows::Forms::CheckBox^  RandomMarker;
		private: System::Windows::Forms::Label^  label7;
		private: System::Windows::Forms::NumericUpDown^  Accuracy_marks;
		private: System::Windows::Forms::Label^  label8;
		private: System::Windows::Forms::Button^  Triangular1Btn;
		private: System::Windows::Forms::Button^  Triangular2Btn;
		private: System::Windows::Forms::Label^  label9;
		private: System::Windows::Forms::Button^  Triangular4Btn;
		private: System::Windows::Forms::Button^  Triangular3Btn;











		private:
			/// <summary>
			/// Требуется переменная конструктора.
			/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Res_Matrix_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->B_Matrix_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->A_Matrix_GridView = (gcnew System::Windows::Forms::DataGridView());
			this->Add_button = (gcnew System::Windows::Forms::Button());
			this->Inverse_B_button = (gcnew System::Windows::Forms::Button());
			this->Det_a_button = (gcnew System::Windows::Forms::Button());
			this->Tranpose_button_A = (gcnew System::Windows::Forms::Button());
			this->Mult_button = (gcnew System::Windows::Forms::Button());
			this->Det_b_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SaveResToA_button = (gcnew System::Windows::Forms::Button());
			this->SaveResToB_button = (gcnew System::Windows::Forms::Button());
			this->DetAres_textbox = (gcnew System::Windows::Forms::TextBox());
			this->DetBres_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->A_creator_buton = (gcnew System::Windows::Forms::Button());
			this->B_creator_button = (gcnew System::Windows::Forms::Button());
			this->Rows_numeric_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->Cols_numeric_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rows_numeric_B = (gcnew System::Windows::Forms::NumericUpDown());
			this->Cols_numeric_A = (gcnew System::Windows::Forms::NumericUpDown());
			this->Tranpose_button_B = (gcnew System::Windows::Forms::Button());
			this->Inverse_A_button = (gcnew System::Windows::Forms::Button());
			this->Triangle_buttonB = (gcnew System::Windows::Forms::Button());
			this->Triangle_buttonA = (gcnew System::Windows::Forms::Button());
			this->Reset_button_A = (gcnew System::Windows::Forms::Button());
			this->Reset_button_B = (gcnew System::Windows::Forms::Button());
			this->RandomMarker = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Accuracy_marks = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Triangular1Btn = (gcnew System::Windows::Forms::Button());
			this->Triangular2Btn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Triangular4Btn = (gcnew System::Windows::Forms::Button());
			this->Triangular3Btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Res_Matrix_GridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B_Matrix_GridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A_Matrix_GridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rows_numeric_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cols_numeric_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rows_numeric_B))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cols_numeric_A))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Accuracy_marks))->BeginInit();
			this->SuspendLayout();
			// 
			// Res_Matrix_GridView
			// 
			this->Res_Matrix_GridView->AllowUserToAddRows = false;
			this->Res_Matrix_GridView->AllowUserToDeleteRows = false;
			this->Res_Matrix_GridView->AllowUserToResizeColumns = false;
			this->Res_Matrix_GridView->AllowUserToResizeRows = false;
			this->Res_Matrix_GridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Res_Matrix_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Res_Matrix_GridView->Location = System::Drawing::Point(755, 12);
			this->Res_Matrix_GridView->Name = L"Res_Matrix_GridView";
			this->Res_Matrix_GridView->Size = System::Drawing::Size(466, 488);
			this->Res_Matrix_GridView->TabIndex = 0;
			// 
			// B_Matrix_GridView
			// 
			this->B_Matrix_GridView->AllowUserToAddRows = false;
			this->B_Matrix_GridView->AllowUserToDeleteRows = false;
			this->B_Matrix_GridView->AllowUserToResizeColumns = false;
			this->B_Matrix_GridView->AllowUserToResizeRows = false;
			this->B_Matrix_GridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->B_Matrix_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->B_Matrix_GridView->Location = System::Drawing::Point(23, 370);
			this->B_Matrix_GridView->Name = L"B_Matrix_GridView";
			this->B_Matrix_GridView->Size = System::Drawing::Size(560, 274);
			this->B_Matrix_GridView->TabIndex = 1;
			// 
			// A_Matrix_GridView
			// 
			this->A_Matrix_GridView->AllowUserToAddRows = false;
			this->A_Matrix_GridView->AllowUserToDeleteRows = false;
			this->A_Matrix_GridView->AllowUserToResizeColumns = false;
			this->A_Matrix_GridView->AllowUserToResizeRows = false;
			this->A_Matrix_GridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->A_Matrix_GridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->A_Matrix_GridView->Location = System::Drawing::Point(23, 31);
			this->A_Matrix_GridView->Name = L"A_Matrix_GridView";
			this->A_Matrix_GridView->Size = System::Drawing::Size(560, 289);
			this->A_Matrix_GridView->TabIndex = 2;
			// 
			// Add_button
			// 
			this->Add_button->Location = System::Drawing::Point(599, 268);
			this->Add_button->Name = L"Add_button";
			this->Add_button->Size = System::Drawing::Size(126, 23);
			this->Add_button->TabIndex = 3;
			this->Add_button->Text = L"А+В";
			this->Add_button->UseVisualStyleBackColor = true;
			this->Add_button->Click += gcnew System::EventHandler(this, &Form1::Add_button_Click);
			// 
			// Inverse_B_button
			// 
			this->Inverse_B_button->Location = System::Drawing::Point(599, 465);
			this->Inverse_B_button->Name = L"Inverse_B_button";
			this->Inverse_B_button->Size = System::Drawing::Size(126, 23);
			this->Inverse_B_button->TabIndex = 4;
			this->Inverse_B_button->Text = L"Обратить B";
			this->Inverse_B_button->UseVisualStyleBackColor = true;
			this->Inverse_B_button->Click += gcnew System::EventHandler(this, &Form1::Inverse_B_button_Click);
			// 
			// Det_a_button
			// 
			this->Det_a_button->Location = System::Drawing::Point(601, 572);
			this->Det_a_button->Name = L"Det_a_button";
			this->Det_a_button->Size = System::Drawing::Size(126, 23);
			this->Det_a_button->TabIndex = 5;
			this->Det_a_button->Text = L"det A";
			this->Det_a_button->UseVisualStyleBackColor = true;
			this->Det_a_button->Click += gcnew System::EventHandler(this, &Form1::Det_a_button_Click);
			// 
			// Tranpose_button_A
			// 
			this->Tranpose_button_A->Location = System::Drawing::Point(599, 348);
			this->Tranpose_button_A->Name = L"Tranpose_button_A";
			this->Tranpose_button_A->Size = System::Drawing::Size(126, 23);
			this->Tranpose_button_A->TabIndex = 6;
			this->Tranpose_button_A->Text = L"Транспонировать A";
			this->Tranpose_button_A->UseVisualStyleBackColor = true;
			this->Tranpose_button_A->Click += gcnew System::EventHandler(this, &Form1::Transpose_button_A);
			// 
			// Mult_button
			// 
			this->Mult_button->Location = System::Drawing::Point(599, 307);
			this->Mult_button->Name = L"Mult_button";
			this->Mult_button->Size = System::Drawing::Size(126, 23);
			this->Mult_button->TabIndex = 7;
			this->Mult_button->Text = L"А*В";
			this->Mult_button->UseVisualStyleBackColor = true;
			this->Mult_button->Click += gcnew System::EventHandler(this, &Form1::Mult_button_Click);
			// 
			// Det_b_button
			// 
			this->Det_b_button->Location = System::Drawing::Point(601, 612);
			this->Det_b_button->Name = L"Det_b_button";
			this->Det_b_button->Size = System::Drawing::Size(126, 23);
			this->Det_b_button->TabIndex = 9;
			this->Det_b_button->Text = L"det B";
			this->Det_b_button->UseVisualStyleBackColor = true;
			this->Det_b_button->Click += gcnew System::EventHandler(this, &Form1::Det_b_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(733, 577);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Det A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(733, 618);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Det B";
			// 
			// SaveResToA_button
			// 
			this->SaveResToA_button->Location = System::Drawing::Point(873, 660);
			this->SaveResToA_button->Name = L"SaveResToA_button";
			this->SaveResToA_button->Size = System::Drawing::Size(153, 23);
			this->SaveResToA_button->TabIndex = 14;
			this->SaveResToA_button->Text = L"Поместить результат в А";
			this->SaveResToA_button->UseVisualStyleBackColor = true;
			this->SaveResToA_button->Click += gcnew System::EventHandler(this, &Form1::SaveResToA_button_Click);
			// 
			// SaveResToB_button
			// 
			this->SaveResToB_button->Location = System::Drawing::Point(1042, 660);
			this->SaveResToB_button->Name = L"SaveResToB_button";
			this->SaveResToB_button->Size = System::Drawing::Size(153, 23);
			this->SaveResToB_button->TabIndex = 15;
			this->SaveResToB_button->Text = L"Поместить результат в В";
			this->SaveResToB_button->UseVisualStyleBackColor = true;
			this->SaveResToB_button->Click += gcnew System::EventHandler(this, &Form1::SaveResToB_button_Click);
			// 
			// DetAres_textbox
			// 
			this->DetAres_textbox->Location = System::Drawing::Point(773, 574);
			this->DetAres_textbox->Name = L"DetAres_textbox";
			this->DetAres_textbox->Size = System::Drawing::Size(55, 20);
			this->DetAres_textbox->TabIndex = 16;
			// 
			// DetBres_textbox
			// 
			this->DetBres_textbox->Location = System::Drawing::Point(773, 616);
			this->DetBres_textbox->Name = L"DetBres_textbox";
			this->DetBres_textbox->Size = System::Drawing::Size(55, 20);
			this->DetBres_textbox->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(596, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Настроить матрицу А";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(596, 116);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Настроить матрицу В";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"A";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"B";
			// 
			// A_creator_buton
			// 
			this->A_creator_buton->Location = System::Drawing::Point(589, 87);
			this->A_creator_buton->Name = L"A_creator_buton";
			this->A_creator_buton->Size = System::Drawing::Size(58, 23);
			this->A_creator_buton->TabIndex = 22;
			this->A_creator_buton->Text = L"Создать";
			this->A_creator_buton->UseVisualStyleBackColor = true;
			this->A_creator_buton->Click += gcnew System::EventHandler(this, &Form1::A_creator_buton_Click);
			// 
			// B_creator_button
			// 
			this->B_creator_button->Location = System::Drawing::Point(589, 199);
			this->B_creator_button->Name = L"B_creator_button";
			this->B_creator_button->Size = System::Drawing::Size(58, 23);
			this->B_creator_button->TabIndex = 23;
			this->B_creator_button->Text = L"Создать";
			this->B_creator_button->UseVisualStyleBackColor = true;
			this->B_creator_button->Click += gcnew System::EventHandler(this, &Form1::B_creator_button_Click);
			// 
			// Rows_numeric_A
			// 
			this->Rows_numeric_A->Location = System::Drawing::Point(599, 35);
			this->Rows_numeric_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Rows_numeric_A->Name = L"Rows_numeric_A";
			this->Rows_numeric_A->Size = System::Drawing::Size(113, 20);
			this->Rows_numeric_A->TabIndex = 24;
			this->Rows_numeric_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// Cols_numeric_B
			// 
			this->Cols_numeric_B->Location = System::Drawing::Point(599, 158);
			this->Cols_numeric_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Cols_numeric_B->Name = L"Cols_numeric_B";
			this->Cols_numeric_B->Size = System::Drawing::Size(113, 20);
			this->Cols_numeric_B->TabIndex = 26;
			this->Cols_numeric_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// Rows_numeric_B
			// 
			this->Rows_numeric_B->Location = System::Drawing::Point(599, 132);
			this->Rows_numeric_B->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Rows_numeric_B->Name = L"Rows_numeric_B";
			this->Rows_numeric_B->Size = System::Drawing::Size(113, 20);
			this->Rows_numeric_B->TabIndex = 27;
			this->Rows_numeric_B->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// Cols_numeric_A
			// 
			this->Cols_numeric_A->Location = System::Drawing::Point(599, 61);
			this->Cols_numeric_A->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Cols_numeric_A->Name = L"Cols_numeric_A";
			this->Cols_numeric_A->Size = System::Drawing::Size(113, 20);
			this->Cols_numeric_A->TabIndex = 28;
			this->Cols_numeric_A->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// Tranpose_button_B
			// 
			this->Tranpose_button_B->Location = System::Drawing::Point(599, 388);
			this->Tranpose_button_B->Name = L"Tranpose_button_B";
			this->Tranpose_button_B->Size = System::Drawing::Size(126, 23);
			this->Tranpose_button_B->TabIndex = 29;
			this->Tranpose_button_B->Text = L"Транспонировать B";
			this->Tranpose_button_B->UseVisualStyleBackColor = true;
			this->Tranpose_button_B->Click += gcnew System::EventHandler(this, &Form1::Transpose_button_B);
			// 
			// Inverse_A_button
			// 
			this->Inverse_A_button->Location = System::Drawing::Point(599, 426);
			this->Inverse_A_button->Name = L"Inverse_A_button";
			this->Inverse_A_button->Size = System::Drawing::Size(126, 23);
			this->Inverse_A_button->TabIndex = 30;
			this->Inverse_A_button->Text = L"Обратить A";
			this->Inverse_A_button->UseVisualStyleBackColor = true;
			this->Inverse_A_button->Click += gcnew System::EventHandler(this, &Form1::Inverse_A_button_Click);
			// 
			// Triangle_buttonB
			// 
			this->Triangle_buttonB->Location = System::Drawing::Point(601, 544);
			this->Triangle_buttonB->Name = L"Triangle_buttonB";
			this->Triangle_buttonB->Size = System::Drawing::Size(126, 23);
			this->Triangle_buttonB->TabIndex = 31;
			this->Triangle_buttonB->Text = L"Ступенчатый вид В";
			this->Triangle_buttonB->UseVisualStyleBackColor = true;
			this->Triangle_buttonB->Click += gcnew System::EventHandler(this, &Form1::Triangle_buttonB_Click);
			// 
			// Triangle_buttonA
			// 
			this->Triangle_buttonA->Location = System::Drawing::Point(601, 507);
			this->Triangle_buttonA->Name = L"Triangle_buttonA";
			this->Triangle_buttonA->Size = System::Drawing::Size(126, 23);
			this->Triangle_buttonA->TabIndex = 32;
			this->Triangle_buttonA->Text = L"Ступенчатый вид А";
			this->Triangle_buttonA->UseVisualStyleBackColor = true;
			this->Triangle_buttonA->Click += gcnew System::EventHandler(this, &Form1::Triangle_buttonA_Click);
			// 
			// Reset_button_A
			// 
			this->Reset_button_A->Location = System::Drawing::Point(653, 87);
			this->Reset_button_A->Name = L"Reset_button_A";
			this->Reset_button_A->Size = System::Drawing::Size(74, 23);
			this->Reset_button_A->TabIndex = 33;
			this->Reset_button_A->Text = L"Сбросить";
			this->Reset_button_A->UseVisualStyleBackColor = true;
			this->Reset_button_A->Click += gcnew System::EventHandler(this, &Form1::Reset_button_A_Click);
			// 
			// Reset_button_B
			// 
			this->Reset_button_B->Location = System::Drawing::Point(653, 199);
			this->Reset_button_B->Name = L"Reset_button_B";
			this->Reset_button_B->Size = System::Drawing::Size(68, 23);
			this->Reset_button_B->TabIndex = 34;
			this->Reset_button_B->Text = L"Сбросить";
			this->Reset_button_B->UseVisualStyleBackColor = true;
			this->Reset_button_B->Click += gcnew System::EventHandler(this, &Form1::Reset_button_B_Click);
			// 
			// RandomMarker
			// 
			this->RandomMarker->AutoSize = true;
			this->RandomMarker->Location = System::Drawing::Point(589, 228);
			this->RandomMarker->Name = L"RandomMarker";
			this->RandomMarker->Size = System::Drawing::Size(160, 17);
			this->RandomMarker->TabIndex = 35;
			this->RandomMarker->Text = L"Автоматически заполнить";
			this->RandomMarker->UseVisualStyleBackColor = true;
			this->RandomMarker->CheckedChanged += gcnew System::EventHandler(this, &Form1::setRandomMode);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(814, 512);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(185, 13);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Количество знаков после запятой:";
			// 
			// Accuracy_marks
			// 
			this->Accuracy_marks->Location = System::Drawing::Point(1005, 510);
			this->Accuracy_marks->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->Accuracy_marks->Name = L"Accuracy_marks";
			this->Accuracy_marks->Size = System::Drawing::Size(120, 20);
			this->Accuracy_marks->TabIndex = 37;
			this->Accuracy_marks->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(876, 572);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Треугольное разложение А:";
			// 
			// Triangular1Btn
			// 
			this->Triangular1Btn->Location = System::Drawing::Point(879, 588);
			this->Triangular1Btn->Name = L"Triangular1Btn";
			this->Triangular1Btn->Size = System::Drawing::Size(138, 20);
			this->Triangular1Btn->TabIndex = 39;
			this->Triangular1Btn->Text = L"Нижнетреугольная";
			this->Triangular1Btn->UseVisualStyleBackColor = true;
			this->Triangular1Btn->Click += gcnew System::EventHandler(this, &Form1::Triangular1Btn_Click);
			// 
			// Triangular2Btn
			// 
			this->Triangular2Btn->Location = System::Drawing::Point(879, 614);
			this->Triangular2Btn->Name = L"Triangular2Btn";
			this->Triangular2Btn->Size = System::Drawing::Size(138, 22);
			this->Triangular2Btn->TabIndex = 40;
			this->Triangular2Btn->Text = L"Верхнетреугольная";
			this->Triangular2Btn->UseVisualStyleBackColor = true;
			this->Triangular2Btn->Click += gcnew System::EventHandler(this, &Form1::Triangular2Btn_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1045, 571);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(147, 13);
			this->label9->TabIndex = 41;
			this->label9->Text = L"Треугольное разложение В";
			// 
			// Triangular4Btn
			// 
			this->Triangular4Btn->Location = System::Drawing::Point(1048, 614);
			this->Triangular4Btn->Name = L"Triangular4Btn";
			this->Triangular4Btn->Size = System::Drawing::Size(138, 22);
			this->Triangular4Btn->TabIndex = 43;
			this->Triangular4Btn->Text = L"Верхнетреугольная";
			this->Triangular4Btn->UseVisualStyleBackColor = true;
			this->Triangular4Btn->Click += gcnew System::EventHandler(this, &Form1::Triangular4Btn_Click);
			// 
			// Triangular3Btn
			// 
			this->Triangular3Btn->Location = System::Drawing::Point(1048, 588);
			this->Triangular3Btn->Name = L"Triangular3Btn";
			this->Triangular3Btn->Size = System::Drawing::Size(138, 20);
			this->Triangular3Btn->TabIndex = 42;
			this->Triangular3Btn->Text = L"Нижнетреугольная";
			this->Triangular3Btn->UseVisualStyleBackColor = true;
			this->Triangular3Btn->Click += gcnew System::EventHandler(this, &Form1::Triangular3Btn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 706);
			this->Controls->Add(this->Triangular4Btn);
			this->Controls->Add(this->Triangular3Btn);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Triangular2Btn);
			this->Controls->Add(this->Triangular1Btn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Accuracy_marks);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->RandomMarker);
			this->Controls->Add(this->Reset_button_B);
			this->Controls->Add(this->Reset_button_A);
			this->Controls->Add(this->Triangle_buttonA);
			this->Controls->Add(this->Triangle_buttonB);
			this->Controls->Add(this->Inverse_A_button);
			this->Controls->Add(this->Tranpose_button_B);
			this->Controls->Add(this->Cols_numeric_A);
			this->Controls->Add(this->Rows_numeric_B);
			this->Controls->Add(this->Cols_numeric_B);
			this->Controls->Add(this->Rows_numeric_A);
			this->Controls->Add(this->B_creator_button);
			this->Controls->Add(this->A_creator_buton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DetBres_textbox);
			this->Controls->Add(this->DetAres_textbox);
			this->Controls->Add(this->SaveResToB_button);
			this->Controls->Add(this->SaveResToA_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Det_b_button);
			this->Controls->Add(this->Mult_button);
			this->Controls->Add(this->Tranpose_button_A);
			this->Controls->Add(this->Det_a_button);
			this->Controls->Add(this->Inverse_B_button);
			this->Controls->Add(this->Add_button);
			this->Controls->Add(this->A_Matrix_GridView);
			this->Controls->Add(this->B_Matrix_GridView);
			this->Controls->Add(this->Res_Matrix_GridView);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Матричные инструменты";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Res_Matrix_GridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B_Matrix_GridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A_Matrix_GridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rows_numeric_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cols_numeric_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rows_numeric_B))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cols_numeric_A))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Accuracy_marks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: bool _randomStatus;
		private: Void transpose(DataGridView ^ MatrixGrid)
		{
			int Rows = MatrixGrid->RowCount;
			int Cols = MatrixGrid->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(MatrixGrid->Rows[i]->Cells[j]->Value->ToString()));
					Matrix Result(A.transpose());
					fillResultMatrix(Result);
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана");
		}

		private: Void det(DataGridView ^ MatrixGrid, TextBox ^ resField)
		{
			int Rows = MatrixGrid->RowCount;
			int Cols = MatrixGrid->ColumnCount;
			if (Rows != 0 && Cols != 0 && Rows == Cols)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(MatrixGrid->Rows[i]->Cells[j]->Value->ToString()));
					resField->Text = A.det().ToString();
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана или не является квадратной");
		}

		private: Void fillResultMatrix(Matrix& Result)
		{
			int Rows = Result.getRowsCount();
			int Cols = Result.getColsCount();
			Res_Matrix_GridView->RowCount = Rows;
			Res_Matrix_GridView->ColumnCount = Cols;
			int c = System::Convert::ToInt32(Accuracy_marks->Value);
			for (int i = 0; i < Rows; ++i)
				for (int j = 0; j < Cols; ++j)
					Res_Matrix_GridView->Rows[i]->Cells[j]->Value = System::Math::Round(Result.getElement(i, j), c, System::MidpointRounding::ToEven).ToString();
		}

		private: Void triangeView(DataGridView ^ MatrixGrid)
		{
			int Rows = MatrixGrid->RowCount;
			int Cols = MatrixGrid->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(MatrixGrid->Rows[i]->Cells[j]->Value->ToString()));
					Matrix Result(A.upperTriangular(&Rows)); /*это чтобы не создавать еще одну переменную, все равно небольшая экономия памяти :)*/
					fillResultMatrix(Result);
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
			}
			else MessageBox::Show("Матрица не задана");
		}

		private: Void inverse(DataGridView ^ MatrixGrid)
		{
			int Rows = MatrixGrid->RowCount;
			int Cols = MatrixGrid->ColumnCount;
			if (Rows != 0 && Cols != 0 && Rows == Cols)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(MatrixGrid->Rows[i]->Cells[j]->Value->ToString()));
					if (A.det() != 0 && Rows == Cols)
					{
						Matrix Result(A.inverse());
						fillResultMatrix(Result);
					}
					else MessageBox::Show("Матрица необратима");

				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана или не является квадратной");
		}

		private: Void saveResTo(DataGridView ^ MatrixGrid)
		{
			int Rows = Res_Matrix_GridView->RowCount;
			int Cols = Res_Matrix_GridView->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				MatrixGrid->RowCount = Rows;
				MatrixGrid->ColumnCount = Cols;
				for (int i = 0; i < Rows; ++i)
					for (int j = 0; j < Cols; ++j)
						MatrixGrid->Rows[i]->Cells[j]->Value = Res_Matrix_GridView->Rows[i]->Cells[j]->Value;
			}
			else MessageBox::Show("Результирующая матрица неопределена!");
		}

		private: Matrix** getTrinangular(Matrix Mx)
		{
			Matrix** Res = Mx.getTriangularDecomposition();
			return Res;

		}

		private: System::Void SaveResToA_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			saveResTo(A_Matrix_GridView);
		}

		private: System::Void SaveResToB_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			saveResTo(B_Matrix_GridView);
		}

		private: Void matrixCreator(DataGridView ^ MatrixGrid, NumericUpDown ^ Rows, NumericUpDown ^ Cols)
		{
			int rows = System::Convert::ToInt32(Rows->Value);
			int cols = System::Convert::ToInt32(Cols->Value);
			if (!((rows == cols) && rows == 1))
			{
				MatrixGrid->RowCount = rows;
				MatrixGrid->ColumnCount = cols;
				if (_randomStatus == true)
				{
					Random^ Randomizer = gcnew Random();
					for (int i = 0; i < rows; ++i)
						for (int j = 0; j < cols; ++j)
						{
							MatrixGrid->Rows[i]->Cells[j]->Value = Randomizer->Next(20);
						}
				}
			}
			else MessageBox::Show("Заданы некоректные значения!");
		}

		private: System::Void A_creator_buton_Click(System::Object^  sender, System::EventArgs^  e)
		{
			matrixCreator(A_Matrix_GridView, Rows_numeric_A, Cols_numeric_A);
		}

		private: System::Void B_creator_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			matrixCreator(B_Matrix_GridView, Rows_numeric_B, Cols_numeric_B);
		}

		private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		{}

		private: System::Void Add_button_Click(System::Object^  sender, System::EventArgs^  e) /**/
		{
			int Rows = A_Matrix_GridView->RowCount;
			int Cols = A_Matrix_GridView->ColumnCount;
			int Rows1 = B_Matrix_GridView->RowCount;
			int Cols1 = B_Matrix_GridView->ColumnCount;
			if (Rows == Rows1 && Cols == Cols1 && Rows != 0 && Cols != 0 && Rows1 != 0 && Cols1 != 0)
			{
				try
				{
					Matrix A(Rows, Cols);
					Matrix B(Rows1, Cols1);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(A_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					for (int i = 0; i < Rows1; ++i)
						for (int j = 0; j < Cols1; ++j)
							B.setElement(i, j, System::Convert::ToDouble(B_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					Matrix Result(A + B);
					fillResultMatrix(Result);
				   /* Res_Matrix_GridView->RowCount = Rows;
					Res_Matrix_GridView->ColumnCount = Cols;
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Rows; ++j)
							Res_Matrix_GridView->Rows[i]->Cells[j]->Value = Result.elements[i][j]; */
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
			}
			else MessageBox::Show("Матрицы не согласованы, или не заданы");

		}

		private: System::Void Mult_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			int Rows = A_Matrix_GridView->RowCount;
			int Cols = A_Matrix_GridView->ColumnCount;
			int Rows1 = B_Matrix_GridView->RowCount;
			int Cols1 = B_Matrix_GridView->ColumnCount;
			/*Rows - число строк 1 матрицы, Cols- число столбцов 1 матрицы, m1 - число столбцов 2 матрицы*/
	   /*Условие согласованности - число столбцов Cols в первом сомножителе равно числу строк n1 во втором*/
			if (Cols == Rows1 && Rows != 0 && Cols != 0 && Rows1 != 0 && Cols1 != 0)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(A_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					Matrix B(Rows1, Cols1);
					for (int i = 0; i < Rows1; ++i)
						for (int j = 0; j < Cols1; ++j)
							B.setElement(i, j, System::Convert::ToDouble(B_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					Matrix Result(A * B);
					fillResultMatrix(Result);
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
			}
			else MessageBox::Show("Матрицы не согласованы, или не заданы");
		}

		private: System::Void Transpose_button_A(System::Object^  sender, System::EventArgs^  e)
		{
			transpose(A_Matrix_GridView);
		}

		private: System::Void Transpose_button_B(System::Object^  sender, System::EventArgs^  e)
		{
			transpose(B_Matrix_GridView);
		}

		private: System::Void Inverse_A_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			inverse(A_Matrix_GridView);
		}

		private: System::Void Inverse_B_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			inverse(B_Matrix_GridView);
		}

		private: System::Void Det_a_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			det(A_Matrix_GridView, DetAres_textbox);
		}

		private: System::Void Det_b_button_Click(System::Object^  sender, System::EventArgs^  e)
		{
			det(B_Matrix_GridView, DetBres_textbox);
		}

		private: System::Void Triangle_buttonA_Click(System::Object^  sender, System::EventArgs^  e)
		{
			triangeView(A_Matrix_GridView);
		}

		private: System::Void Triangle_buttonB_Click(System::Object^  sender, System::EventArgs^  e)
		{
			triangeView(B_Matrix_GridView);
		}

		private: System::Void Reset_button_A_Click(System::Object^  sender, System::EventArgs^  e)
		{
			A_Matrix_GridView->RowCount = 0;

		}

		private: System::Void Reset_button_B_Click(System::Object^  sender, System::EventArgs^  e)
		{
			B_Matrix_GridView->ColumnCount = 0;
		}

		private: System::Void setRandomMode(System::Object^  sender, System::EventArgs^  e)
		{
			_randomStatus = System::Convert::ToBoolean(RandomMarker->CheckState);
		}
		private: System::Void Triangular1Btn_Click(System::Object^  sender, System::EventArgs^  e)
		{
			int Rows = A_Matrix_GridView->RowCount;
			int Cols = A_Matrix_GridView->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(A_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					if (A.checkMainMinors())
					{
						Matrix Result(*A.getTriangularDecomposition()[0]);
						fillResultMatrix(Result);
					}
					else MessageBox::Show( "Матрица не разложима","Ошибка");
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана");
		}
		private: System::Void Triangular2Btn_Click(System::Object^  sender, System::EventArgs^  e)
		{
			int Rows = A_Matrix_GridView->RowCount;
			int Cols = A_Matrix_GridView->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				try
				{
					Matrix A(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							A.setElement(i, j, System::Convert::ToDouble(A_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					if (A.checkMainMinors())
					{
						Matrix Result(*A.getTriangularDecomposition()[1]);
						fillResultMatrix(Result);
					}
					else MessageBox::Show("Матрица не разложима", "Ошибка");
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана");
		}
		private: System::Void Triangular3Btn_Click(System::Object^  sender, System::EventArgs^  e)
		{
			int Rows = B_Matrix_GridView->RowCount;
			int Cols = B_Matrix_GridView->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				try
				{
					Matrix B(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							B.setElement(i, j, System::Convert::ToDouble(B_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					if (B.checkMainMinors())
					{
						Matrix Result(*B.getTriangularDecomposition()[0]);
						fillResultMatrix(Result);
					}
					else MessageBox::Show("Матрица не разложима","Ошибка");
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана");
		}

		private: System::Void Triangular4Btn_Click(System::Object^  sender, System::EventArgs^  e)
		{
			int Rows = B_Matrix_GridView->RowCount;
			int Cols = B_Matrix_GridView->ColumnCount;
			if (Rows != 0 && Cols != 0)
			{
				try
				{
					Matrix B(Rows, Cols);
					for (int i = 0; i < Rows; ++i)
						for (int j = 0; j < Cols; ++j)
							B.setElement(i, j, System::Convert::ToDouble(B_Matrix_GridView->Rows[i]->Cells[j]->Value->ToString()));
					if (B.checkMainMinors())
					{
						Matrix Result(*B.getTriangularDecomposition()[1]);
						fillResultMatrix(Result);
					}
					else MessageBox::Show("Матрица не разложима", "Ошибка");
				}
				catch (System::FormatException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::OverflowException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}
				catch (System::InvalidCastException^ error)
				{
					MessageBox::Show(error->Message, "Ошибка");
				}

			}
			else MessageBox::Show("Матрица не задана");
		}
	};
}

