#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x947775cf, "__mt76_poll" },
	{ 0xef34bf3e, "hrtimer_active" },
	{ 0x64225956, "mt76x02_mac_set_beacon" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0x77657099, "mt76_skb_adjust_pad" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6fbcba39, "mt76u_vendor_request" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0x364b3ce9, "mt76x02_mac_write_txwi" },
	{ 0x618fcdae, "mt76x02_init_beacon_config" },
	{ 0xb7377510, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x9f7b0916, "mt76_csa_finish" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x7fc4b79f, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x601e0cc, "mt76x02_mac_reset_counters" },
	{ 0xf4a835bd, "__mt76_tx_complete_skb" },
	{ 0x64a90ab8, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xafc72a2d, "mt76_tx_status_skb_add" },
	{ 0x7951dc08, "mt76_csa_check" },
	{ 0xf54291ee, "mt76x02_mcu_parse_response" },
	{ 0x7a6ffbfd, "mt76_mcu_msg_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7237e850, "mt76x02_resync_beacon_timer" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x5c34178d, "consume_skb" },
	{ 0xe22d1723, "skb_put" },
	{ 0x34dba032, "mt76x02_remove_hdr_pad" },
	{ 0xfde6b254, "mt76x02_enqueue_buffered_bc" },
	{ 0x177c185b, "ieee80211_iterate_interfaces" },
	{ 0x12e7080, "mt76x02_update_beacon_iter" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,mt76-usb,cfg80211,mac80211");


MODULE_INFO(srcversion, "EA4C3C61CF001812D2F8497");
