﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LinkedList
{
    internal class Link
    {
        public int id;
        public string name;
        public Link? next;


        public Link(int id, string name)
        {
            this.id = id;
            this.name = name;
        }

        public void displayLink()
        {
            Console.WriteLine($"id: {id}, name: {name}");
        }

    }



}
