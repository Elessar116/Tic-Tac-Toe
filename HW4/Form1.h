#pragma once

namespace HW4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//			
			void CheckFirstWin();		//檢查玩家一是否獲勝函式
			void CheckSecondWin();		//檢查玩家二是否獲勝函式
			void IniGame();				//遊戲起始設定函式
			void EndGame();				//結束遊戲設定函式
			bool IsTie();				//檢查是否平手函式
		}
		
	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected:
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		DateTime startTime;//紀錄時間用
		array<int^>^ gameStatus = gcnew array<int^>(9);//紀錄現在局面
		array<bool^>^ isChecked = gcnew array<bool^>(9);//紀錄那些格子有被選到		
		int playerNo = 0;//玩家編號
		int status = 0;//紀錄是否在遊戲中
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 474);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(653, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(0, 17);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox9);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox8);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox7);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox6);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox5);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox4);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox3);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox2);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->groupBox1);
			this->splitContainer1->Size = System::Drawing::Size(653, 474);
			this->splitContainer1->SplitterDistance = 510;
			this->splitContainer1->TabIndex = 1;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox9->Location = System::Drawing::Point(276, 274);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 100);
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Form1::pictureBox9_Click);
			this->pictureBox9->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox9_MouseEnter);
			this->pictureBox9->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox9_MouseLeave);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox8->Location = System::Drawing::Point(170, 274);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 100);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &Form1::pictureBox8_Click);
			this->pictureBox8->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox8_MouseEnter);
			this->pictureBox8->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox8_MouseLeave);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox7->Location = System::Drawing::Point(64, 274);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 100);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			this->pictureBox7->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox7_MouseEnter);
			this->pictureBox7->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox7_MouseLeave);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox6->Location = System::Drawing::Point(276, 168);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 100);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Form1::pictureBox6_Click);
			this->pictureBox6->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox6_MouseEnter);
			this->pictureBox6->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox6_MouseLeave);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox5->Location = System::Drawing::Point(170, 168);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 100);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Form1::pictureBox5_Click);
			this->pictureBox5->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox5_MouseEnter);
			this->pictureBox5->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox5_MouseLeave);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox4->Location = System::Drawing::Point(64, 168);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Form1::pictureBox4_Click);
			this->pictureBox4->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox4_MouseEnter);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox4_MouseLeave);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox3->Location = System::Drawing::Point(276, 62);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 100);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Form1::pictureBox3_Click);
			this->pictureBox3->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox3_MouseEnter);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox3_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->Location = System::Drawing::Point(170, 62);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			this->pictureBox2->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox2_MouseEnter);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox2_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox1->Location = System::Drawing::Point(64, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &Form1::pictureBox1_MouseLeave);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(18, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(3, 420);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"00:00:00.0";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(3, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(132, 87);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1(O) 2(X)";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 43);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(53, 16);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"玩家2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(6, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(53, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"玩家1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 496);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip1);
			this->Name = L"Form1";
			this->Text = L"Tic-Tac-Toe";
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				if (button1->Text == "Start")
				{
					startTime = DateTime::Now;			//紀錄開始時間
					timer1->Interval = 20;
					timer1->Enabled = true;			//啟動計時器
					if (radioButton1->Checked)			//檢查誰先手
					{
						IniGame();						//起始設定
						toolStripStatusLabel1->Text = radioButton1->Text;
						playerNo = 1;						 
					}
					else
					{
						IniGame();
						toolStripStatusLabel1->Text = radioButton2->Text;
						playerNo = -1;
					}
					radioButton1->Enabled = false;		//開始遊戲後關閉radiobutton
					radioButton2->Enabled = false;
					button1->Text = "Stop";
				}
				else
				{
					EndGame();					//按下stop終止遊戲
				}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 auto clockTime = DateTime::Now - startTime;
			 label1->Text = clockTime.ToString("hh':'mm':'ss\\.ffff");//顯示時間
}
void IniGame()//起始設定
{
	status = 1;
	for (int i = 0; i < 9; i++)
	{
		gameStatus[i] = 0;
		isChecked[i] = false;
	}

}
void EndGame()//結束設定
{
	status = 0;
	pictureBox1->Image = nullptr;
	pictureBox2->Image = nullptr;
	pictureBox3->Image = nullptr;
	pictureBox4->Image = nullptr;
	pictureBox5->Image = nullptr;
	pictureBox6->Image = nullptr;
	pictureBox7->Image = nullptr;
	pictureBox8->Image = nullptr;
	pictureBox9->Image = nullptr;
	timer1->Enabled = false;
	label1->Text = "00:00:00.0";
	radioButton1->Enabled = true;
	radioButton2->Enabled = true;
	toolStripStatusLabel1->Text = "";
	button1->Text = "Start";
}
bool IsTie()//判斷是否平手
{
	for (int i = 0; i < 9; i++)
	{
		if (gameStatus[i]->Equals(0))
		{
			return false;
		}
	}
	return true;
}
void CheckFirstWin()//檢查第一位玩家是否獲勝
{
	if (gameStatus[0]->Equals(1) && gameStatus[1]->Equals(1) && gameStatus[2]->Equals(1)) //
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[3]->Equals(1) && gameStatus[4]->Equals(1) && gameStatus[5]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[6]->Equals(1) && gameStatus[7]->Equals(1) && gameStatus[8]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[0]->Equals(1) && gameStatus[3]->Equals(1) && gameStatus[6]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[1]->Equals(1) && gameStatus[4]->Equals(1) && gameStatus[7]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[2]->Equals(1) && gameStatus[5]->Equals(1) && gameStatus[8]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[0]->Equals(1) && gameStatus[4]->Equals(1) && gameStatus[8]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (gameStatus[2]->Equals(1) && gameStatus[4]->Equals(1) && gameStatus[6]->Equals(1))
	{
		MessageBox::Show("玩家1獲勝");
		EndGame();
	}
	else if (IsTie() == true)
	{
		MessageBox::Show("平手");
		EndGame();
	}
}
void CheckSecondWin()//檢查第二位玩家是否獲勝
{
	if (gameStatus[0]->Equals(-1) && gameStatus[1]->Equals(-1) && gameStatus[2]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[3]->Equals(-1) && gameStatus[4]->Equals(-1) && gameStatus[5]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[6]->Equals(-1) && gameStatus[7]->Equals(-1) && gameStatus[8]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[0]->Equals(-1) && gameStatus[3]->Equals(-1) && gameStatus[6]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[1]->Equals(-1) && gameStatus[4]->Equals(-1) && gameStatus[7]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[2]->Equals(-1) && gameStatus[5]->Equals(-1) && gameStatus[8]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[0]->Equals(-1) && gameStatus[4]->Equals(-1) && gameStatus[8]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (gameStatus[2]->Equals(-1) && gameStatus[4]->Equals(-1) && gameStatus[6]->Equals(-1))
	{
		MessageBox::Show("玩家2獲勝");
		EndGame();
	}
	else if (IsTie() == true)
	{
		MessageBox::Show("平手");
		EndGame();
	}
}
//判斷並顯示滑鼠位置
#pragma region Mouse position
private: System::Void pictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(1,1)";
}
private: System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox2_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(1,2)";
}
private: System::Void pictureBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(1,3)";
}
private: System::Void pictureBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(2,1)";
}
private: System::Void pictureBox4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(2,2)";
}
private: System::Void pictureBox5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox6_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(2,3)";
}
private: System::Void pictureBox6_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox7_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(3,1)";
}
private: System::Void pictureBox7_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox8_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(3,2)";
}
private: System::Void pictureBox8_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
private: System::Void pictureBox9_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "滑鼠目前位置:(3,3)";
}
private: System::Void pictureBox9_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 toolStripStatusLabel2->Text = "";
}
#pragma endregion
//按下picture後之事件
#pragma region PictureBox click
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //pictureBox1->Image = nullptr;
			 if (status == 1)
			 {
				 if (isChecked[0]->Equals(false))
				 {
					 gameStatus[0] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox1->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox1->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[0] = true;					 
					 playerNo = -playerNo;

				 }
			 }
			 
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[1]->Equals(false))
				 {
					 gameStatus[1] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox2->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox2->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[1] = true;					 
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[2]->Equals(false))
				 {
					 gameStatus[2] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox3->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox3->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[2] = true;
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[3]->Equals(false))
				 {
					 gameStatus[3] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox4->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox4->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[3] = true;
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[4]->Equals(false))
				 {
					 gameStatus[4] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox5->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox5->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[4] = true;
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[5]->Equals(false))
				 {
					 gameStatus[5] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox6->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox6->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[5] = true;
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[6]->Equals(false))
				 {
					 gameStatus[6] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox7->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox7->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[6] = true;
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[7]->Equals(false))
				 {
					 gameStatus[7] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox8->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox8->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[7] = true;
					 playerNo = -playerNo;
				 }
			 }
}
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (status == 1)
			 {
				 if (isChecked[8]->Equals(false))
				 {
					 gameStatus[8] = playerNo;
					 if (playerNo == 1)
					 {
						 pictureBox9->Image = Image::FromFile("O.jpg");
						 toolStripStatusLabel1->Text = "玩家2";
						 CheckFirstWin();
					 }
					 else
					 {
						 pictureBox9->Image = Image::FromFile("X.jpg");
						 toolStripStatusLabel1->Text = "玩家1";
						 CheckSecondWin();
					 }
					 isChecked[8] = true;
					 playerNo = -playerNo;
				 }
			 }
}
#pragma endregion
};
}

