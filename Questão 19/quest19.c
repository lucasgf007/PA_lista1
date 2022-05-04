using System;

class MyGCCollectClass
{
   private const int maxGarbage = 1000;

   static void Main()
   {
      // coloca alguns objetos na memória.
      MyGCCollectClass.MakeSomeGarbage();
      Console.WriteLine("Memory used before collection:       {0:N0}",
                        GC.GetTotalMemory(false));

      // Colete todas as gerações de memória.
      GC.Collect();
      Console.WriteLine("Memory used after full collection:   {0:N0}",
                        GC.GetTotalMemory(true));
   }

   static void MakeSomeGarbage()
   {
      Version vt;

      // Cria objetos e libere-os para preencher a memória com objetos não utilizados

      for(int i = 0; i < maxGarbage; i++) {
         vt = new Version();
      }
   }
}