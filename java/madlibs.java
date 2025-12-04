import java.util.*;


public class madlibs 
{
    public static void main(String[] args)
    {

        String story = """
                Yesterday, my friend {name1} and I began our journey to the ancient land of {fantasyPlace1}.
                Legend said that somewhere deep inside its {adjective1} forests, there was a hidden artifact known as the {artifactName}.
                People claimed it had the power to {verb1} anything it touched, which made it both {adjective2} and extremely dangerous.
                Before leaving, our mentor, {mentorName}, warned us to carry a {object1} at all times, just in case we encountered a wild {creature1}.

                The road to {fantasyPlace1} was long and {adjective3}.
                While walking, we heard a loud {sound1} coming from the trees.
                Suddenly, a {adjective4} {creature2} jumped out and started {verbIng1} around us.
                We were terrified, but {name1} bravely held up the {object1} and shouted, "{exclamation1}!"
                Surprisingly, the creature froze, stared at us, and then handed us a small {object2} before disappearing back into the forest.

                When we finally arrived at the entrance of the {ancientStructure}, the sky had already turned {color1}.
                Carved on the door was a strange message written in {language1}:
                "Only those who possess the {object2} may enter and claim the {artifactName}."
                With a deep breath, I placed the object into the stone slot.
                The ground began to shake, the doors opened slowly, and a {adjective5} light filled the room.
                Inside, on a tall pedestal, rested the legendary artifact itself—glowing like a {noun1}.

                Just as we reached out to grab it, the guardian spirit of the temple appeared.
                It looked like a massive {creature3} with {number1} glowing eyes and a voice that sounded like {sound2}.
                The guardian asked us one question: "Why do you seek the {artifactName}?"
                After thinking for a moment, {name1} answered,
                "We want to use its power to {verb2} and bring {abstractNoun1} to the world."

                The room filled with a warm {adjective6} breeze, and the artifact floated gently into our hands.
                With the {artifactName} secured, we stepped out of the ancient temple—ready for the next chapter,
                one that would surely be filled with more {adjective7} challenges than we could imagine.
                """;


        System.out.println("===== MADLIBS GAME =====");

        Scanner sc = new Scanner(System.in);

        
        String[] keys = {
                "name1", "mentorName", "fantasyPlace1", "ancientStructure",
                "adjective1", "adjective2", "adjective3", "adjective4", "adjective5", "adjective6", "adjective7",
                "artifactName", "object1", "object2", "noun1", "creature1", "creature2", "creature3",
                "verb1", "verbIng1", "verb2", "sound1", "sound2", "color1",
                "exclamation1", "language1", "number1", "abstractNoun1"
        }; 

        Map<String, String> values = new HashMap<>();


        for (String key: keys)
        {
            System.out.print("Enter " + key + ": ");
            values.put(key, sc.nextLine());
        }

        for (String key : values.keySet())
        {
            story = story.replace("{" + key + "}", values.get(key));
        }
        
        System.out.println("\n --- FINAL STORY ---\n");
        System.out.println(story);

        sc.close();

    }    
}
