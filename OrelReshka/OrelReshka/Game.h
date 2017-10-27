#pragma once
#include <random>
#include <ctime>
#include "If_Reshka.h"
#include "If_Orel.h"
#include "UserData.h"
namespace OrelReshka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  toss_coin;
	private: System::Windows::Forms::Label^  player_score;

	private: System::Windows::Forms::Label^  Computer;

	private: System::Windows::Forms::RadioButton^  rb_orel;
	private: System::Windows::Forms::RadioButton^  rb_reshka;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  nickname;

	private: System::Windows::Forms::Label^  comp_score;




	protected:

	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->toss_coin = (gcnew System::Windows::Forms::Button());
			this->player_score = (gcnew System::Windows::Forms::Label());
			this->Computer = (gcnew System::Windows::Forms::Label());
			this->rb_orel = (gcnew System::Windows::Forms::RadioButton());
			this->rb_reshka = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->nickname = (gcnew System::Windows::Forms::Label());
			this->comp_score = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toss_coin
			// 
			this->toss_coin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toss_coin.BackgroundImage")));
			this->toss_coin->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->toss_coin->ForeColor = System::Drawing::SystemColors::Control;
			this->toss_coin->Location = System::Drawing::Point(341, 359);
			this->toss_coin->Name = L"toss_coin";
			this->toss_coin->Size = System::Drawing::Size(127, 36);
			this->toss_coin->TabIndex = 0;
			this->toss_coin->Text = L"Подкинуть монету";
			this->toss_coin->UseVisualStyleBackColor = true;
			this->toss_coin->Click += gcnew System::EventHandler(this, &Game::toss_coin_Click);
			// 
			// player_score
			// 
			this->player_score->AutoSize = true;
			this->player_score->Location = System::Drawing::Point(30, 22);
			this->player_score->Name = L"player_score";
			this->player_score->Size = System::Drawing::Size(13, 13);
			this->player_score->TabIndex = 1;
			this->player_score->Text = L"0";
			// 
			// Computer
			// 
			this->Computer->AutoSize = true;
			this->Computer->Location = System::Drawing::Point(338, 9);
			this->Computer->Name = L"Computer";
			this->Computer->Size = System::Drawing::Size(130, 13);
			this->Computer->TabIndex = 2;
			this->Computer->Text = L"Искуственный интелект";
			// 
			// rb_orel
			// 
			this->rb_orel->AutoSize = true;
			this->rb_orel->Checked = true;
			this->rb_orel->Location = System::Drawing::Point(96, 13);
			this->rb_orel->Name = L"rb_orel";
			this->rb_orel->Size = System::Drawing::Size(51, 17);
			this->rb_orel->TabIndex = 4;
			this->rb_orel->TabStop = true;
			this->rb_orel->Text = L"Орёл";
			this->rb_orel->UseVisualStyleBackColor = true;
			// 
			// rb_reshka
			// 
			this->rb_reshka->AutoSize = true;
			this->rb_reshka->Location = System::Drawing::Point(12, 13);
			this->rb_reshka->Name = L"rb_reshka";
			this->rb_reshka->Size = System::Drawing::Size(58, 17);
			this->rb_reshka->TabIndex = 5;
			this->rb_reshka->Text = L"Решка";
			this->rb_reshka->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->rb_reshka);
			this->groupBox1->Controls->Add(this->rb_orel);
			this->groupBox1->Location = System::Drawing::Point(12, 359);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(168, 36);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Загадайте сторону монеты";
			// 
			// nickname
			// 
			this->nickname->AutoSize = true;
			this->nickname->Location = System::Drawing::Point(21, 9);
			this->nickname->Name = L"nickname";
			this->nickname->Size = System::Drawing::Size(47, 13);
			this->nickname->TabIndex = 7;
			this->nickname->Text = L"Никнем";
			// 
			// comp_score
			// 
			this->comp_score->AutoSize = true;
			this->comp_score->Location = System::Drawing::Point(398, 22);
			this->comp_score->Name = L"comp_score";
			this->comp_score->Size = System::Drawing::Size(13, 13);
			this->comp_score->TabIndex = 8;
			this->comp_score->Text = L"0";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(473, 399);
			this->Controls->Add(this->comp_score);
			this->Controls->Add(this->nickname);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Computer);
			this->Controls->Add(this->player_score);
			this->Controls->Add(this->toss_coin);
			this->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Орёл или Решка";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Game::Game_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int foo;
	private: int choosen_var = 0;

			 If_Reshka^ reshka = gcnew If_Reshka();
			 If_Orel^ orel = gcnew If_Orel();
	private: System::Void toss_coin_Click(System::Object^  sender, System::EventArgs^  e) {
		orel->Hide();
		reshka->Hide();

		srand(time(0));
		if (rb_orel->Checked)
		{
			choosen_var = 0;
		}
		else if (rb_reshka->Checked)
		{
			choosen_var = 1;
		}

		foo = rand() % 2;

		if (foo == 0)
		{
			
			orel->Show();
		}
		else if (foo == 1)
		{
			reshka->Show();
		}

		if (foo == choosen_var)
		{
			player_score->Text = Convert::ToString(Convert::ToInt32(player_score->Text) + 1);
		}
		else
		{
			comp_score->Text = Convert::ToString(Convert::ToInt32(comp_score->Text) + 1);
		}
	};
	private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e) {
		nickname->Text = UserData::nick;
	};
	private: System::Void Game_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		reshka->Close();
		orel->Close();

	}
};
}