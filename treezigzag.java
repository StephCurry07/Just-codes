class Solution {
    int check = 0;
    public void traverse(TreeNode t, List<List<Integer>> al, int level){
        if(t == null){
            return;
        }
        if(al.size() <= level){
            List<Integer> next = new ArrayList<>();
            al.add(next);
        }

        List<Integer> addval = al.get(level);
        if(level%2 == 0){
            addval.add(t.val);
        }
        else{
            addval.add(0, t.val);
        }
        traverse(t.left, al, level + 1);
        traverse(t.right, al, level + 1);
        // System.out.print(al);
    }

    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        List<Integer> al = new ArrayList<Integer>();
        List<Integer> temp = new ArrayList<Integer>();
        traverse(root, ans, 0);
        if(ans.isEmpty()){
            return new ArrayList<List<Integer>>();
        }
        // int len = (int)Math.ceil(Math.log(al.size()));
        return ans;
    }
}
