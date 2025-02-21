using System;

namespace laba15
{
    public partial class Form1 : Form
    {
        int steps = 0;
        public Form1()
        {
            InitializeComponent();
        }


        private void Form1_Load(object sender, EventArgs e)
        {
            int[] arr = new int[100];
            Random rand = new Random();
            for (int i = 0; i < arr.Length; i++)
                arr[i] = rand.Next(1, 100);

            for (int i = 0; i < 100; i++)
            {
                listBox1.Items.Add(arr[i]);
            }

            // Применение пузырьковой
            int[] arr_buble = new int[100];
            steps = 0;
            arr.CopyTo(arr_buble, 0);
            BubbleSort(ref arr_buble);

            for (int i = 0; i < 100; i++)
            {
                listBox2.Items.Add(arr_buble[i]);
            }
            label10.Text = steps.ToString();

            // Применение выборкой
            int[] arr_choise = new int[100];
            steps = 0;
            arr.CopyTo(arr_choise, 0);
            SelectionSort(ref arr_choise);

            for (int i = 0; i < 100; i++)
            {
                listBox3.Items.Add(arr_choise[i]);
            }
            label11.Text = steps.ToString();

            // Применение бфстрой
            int[] arr_fast = new int[100];
            steps = 0;
            arr.CopyTo(arr_fast, 0);
            QuickSort(ref arr_fast, 0, 99);

            for (int i = 0; i < 100; i++)
            {
                listBox4.Items.Add(arr_fast[i]);
            }
            label12.Text = steps.ToString();

            // Обычный поиск
            steps = 0;
            int index = IndexOf(ref arr, arr[50]);
            listBox5.Items.Add(index);
            label13.Text = steps.ToString();

            // Бин поиск
            steps = 0;
            index = IndexOf(ref arr_fast, arr_fast[50]);
            listBox6.Items.Add(index);
            label14.Text = steps.ToString();
        }

        void BubbleSort(ref int[] Array)
        {
            // Перебираем элементы массива (без последнего)
            for (int i = 0; i < Array.Length - 1; i++)
                // Перебираем все элементы справа от i
                for (int j = i + 1; j < Array.Length; j++)
                    // Правильный ли порядок элементов?
                    if (Array[i] > Array[j])
                    {
                        steps++;
                        // Нет – меняем порядок
                        int t = Array[i];
                        Array[i] = Array[j];
                        Array[j] = t;
                    }
        }

        void SelectionSort(ref int[] Array)
        {
            // Перебираем все элементы массива (безпоследнего)
            // i – позиция первого неотсортированного элемента
            for (int i = 0; i < Array.Length - 1; i++)
            {
                // Позиция минимального элемента справа от i
                int min = i;
                // Перебираем все элементы справа от i
                for (int j = i + 1; j < Array.Length; j++)
                    // Меньше ли очередной элемент минимального?
                    if (Array[j] < Array[min])
                        // Да – теперь это минимальный элемент
                        min = j;
                // Минимальный элемент не первый?
                // Меняем местами!
                if (min != i)
                {
                    int t = Array[i];
                    Array[i] = Array[min];
                    Array[min] = t;
                    steps++;
                }
            }
        }

        void QuickSort(ref int[] Array, int Left, int Right)
        {
            // i и j – индексы границ разделяемого массива
            int i = Left;
            int j = Right;
            // x – индекс опорного элемента
            int x = Array[(Left + Right) / 2];
            do
            {
                // Ищем элемент слева, который больше опорного
                while (Array[i] < x)
                    ++i;
                // Ищем элемент справа, который меньше опорного
                while (Array[j] > x) -- j;
                // Если индексы не поменялись местами,
                // то обмениваем элементы
                if (i <= j)
                {
                    int t = Array[i];
                    Array[i] = Array[j];
                    Array[j] = t;
                    i++;
                    j--;
                    steps++;
                }
            } while (i <= j);
            // Рекурсивно выполняем быструю сортировку 
            // для массивов слева и справа
            if (Left < j)
                QuickSort(ref Array, Left, j);
            if (i < Right)
                QuickSort(ref Array, i, Right);
        }

        int IndexOf(ref int[] Array, int Value)
        {
            // Перебираем все элементы массива
            for (int i = 0; i < Array.Length; i++) {
                // Нашли нужное значение? Возвращаем его индекс
                steps++;
                if (Array[i] == Value)
                    return i;
            }
            // Перебор закончился безрезультатно – возвращаем –1
            return -1;
        }

        int IndexOfBin(ref int[] Array, int Value, int Left, int Right)
        {
            // Находим середину диапазона
            int x = (Left + Right) / 2;
            // Если нашли значение – возвращаем его индекс
            if (Array[x] == Value)
                return x;
            // Если середина совпадает с левой или 
            // правой границами – значение не найдено
            if ((x == Left) || (x == Right))
                return -1;
            // Продолжаем поиск слева или справа от середины
            steps++;
            if (Array[x] < Value)
                return IndexOfBin(ref Array, Value, x, Right);
            else
                return IndexOfBin(ref Array, Value, Left, x);
        }

    }
}
